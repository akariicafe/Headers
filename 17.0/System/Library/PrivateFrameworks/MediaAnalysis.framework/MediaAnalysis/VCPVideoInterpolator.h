@class NSString, NSArray, AVAssetReader, VCPMovieAssetWriter, FRCFrameInterpolator, AVAssetReaderTrackOutput, NSMutableArray, FRCFrame, AVAssetTrack;

@interface VCPVideoInterpolator : VCPVideoAnalyzer {
    NSArray *_frameInsertionLists;
    FRCFrameInterpolator *_frameInterpolator;
    FRCFrame *_previousFrame;
    VCPMovieAssetWriter *_assetWriter;
    unsigned long long _anchorIndex;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _anchorPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startAdjustedPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _endAdjustedPTS;
    NSString *_filePath;
    NSString *_combinedFilePath;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_livePhotoInfoOutput;
    AVAssetTrack *_originalTrack;
    struct opaqueCMSampleBuffer { } *_previousMetadata;
    NSMutableArray *_intraFrameList;
}

@property (readonly) BOOL processAborted;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } adjustedTimeRange;
@property (nonatomic) BOOL cancelled;

+ (BOOL)isEnabled;
+ (BOOL)allowMultipleFormats;
+ (long long)getFRCQualityMode;
+ (void)sendPreGatedAnalytics;

- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)appendOutput:(id)a0 toTrack:(id)a1 startTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 endTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 offset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a5;
- (int)combineVideoSegments;
- (id)deserializeMetadata:(struct opaqueCMSampleBuffer { } *)a0;
- (int)findIntraFrameList:(id)a0;
- (id)findLivePhotoInfoOutput:(id)a0;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct CGSize { double x0; double x1; })getFrameSize:(id)a0;
- (id)initWithTimestamps:(id)a0 andIdentifier:(id)a1 andTrack:(id)a2;
- (BOOL)isIntraFrame:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)setupLivePhotoInfoOutput:(id)a0;
- (int)updateLivePhotoInfoSample:(struct opaqueCMSampleBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withMetadata:(id)a2 isInterpolated:(BOOL)a3 updatedSample:(struct opaqueCMSampleBuffer **)a4;

@end
