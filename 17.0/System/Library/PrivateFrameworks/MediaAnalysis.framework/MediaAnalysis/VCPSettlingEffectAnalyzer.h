@class FRCFrameInterpolator, AVAssetReaderTrackOutput, CIContext, NSDictionary, NSMutableArray, NSString, FRCFrameDropDetector, AVAssetTrack, NSArray, VCPPoolBasedPixelBufferCreator, FRCFrame, VCPMovieAssetWriter, AVAssetReader;

@interface VCPSettlingEffectAnalyzer : VCPVideoAnalyzer {
    FRCFrameInterpolator *_frameInterpolator;
    FRCFrame *_previousFrame;
    VCPMovieAssetWriter *_assetWriter;
    unsigned long long _anchorIndex;
    unsigned long long _timingCurveIdx;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _settlingStartPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _anchorPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _outputFrameDuration;
    NSString *_filePath;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_livePhotoInfoOutput;
    AVAssetTrack *_originalTrack;
    struct opaqueCMSampleBuffer { } *_previousMetadata;
    NSArray *_framePTSList;
    NSArray *_timingCurveList;
    NSDictionary *_pixelBasedHomogrphies;
    CIContext *_context;
    unsigned long long _frameIdx;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct CGSize { double width; double height; } _destSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cleanApertureRect;
    VCPPoolBasedPixelBufferCreator *_bufferCreator;
    long long _FRCRecommendation;
    BOOL _userInitiatedMode;
    BOOL _videoQualityGatingFailure;
    BOOL _metadataIntegrityFailure;
    BOOL _FRCGatingFailure;
    BOOL _stillTransitionGatingFailure;
    float _FRCConfidence;
    NSDictionary *_FRCStatistics;
    FRCFrameDropDetector *_frameDropDetector;
    NSMutableArray *_burstDropsList;
}

@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } adjustedTimeRange;
@property (readonly) BOOL processAborted;
@property (nonatomic) BOOL cancelled;

+ (BOOL)disableBurstFrameDropGating;
+ (BOOL)disableMetadataIntegrityCheck;
+ (BOOL)disableStillTransitionGating;
+ (BOOL)disableVideoQualityGating;
+ (long long)getFRCQualityMode;
+ (id)getFramePTSList:(id)a0 before:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)getRetimingCurve;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getSettlingEffectTimeRange:(id)a0 withOptions:(id)a1;

- (void)dealloc;
- (id)results;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)resamplePixelBuffer:(struct __CVBuffer { } *)a0 cleanApertureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 homographyArray:(id)a3;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)createLivePhotoInfoSample:(struct opaqueCMSampleBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isInterpolated:(BOOL)a2 updatedSample:(struct opaqueCMSampleBuffer **)a3;
- (id)findLivePhotoInfoOutput:(id)a0;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 withStillImageBuffer:(struct __CVBuffer { } *)a1;
- (struct CGSize { double x0; double x1; })getCleanApertureFrameSize:(id)a0;
- (struct CGSize { double x0; double x1; })getFrameSize:(id)a0;
- (id)getPixelBasedHomographies:(id)a0 withCleanApertureSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTimestamps:(id)a0 andTrack:(id)a1 andRecipe:(id)a2 withOptions:(id)a3;
- (struct __CVBuffer { } *)scaleStillImage:(struct __CVBuffer { } *)a0;
- (int)setupLivePhotoInfoOutput:(id)a0;

@end
