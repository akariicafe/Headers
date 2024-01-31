@class NSArray, VCPVideoMetaMotionSegment, NSMutableArray;

@interface VCPVideoMetaMotionAnalyzer : NSObject {
    struct HinkleyDetector { float sensitivity_; float threshold_; int min_length_; struct HinkleyStats { float upper_; float lower_; float max_; float min_; } stats_; } _hinkleyDetector;
    VCPVideoMetaMotionSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    NSMutableArray *_internalResults;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _frameTimeRange;
}

@property (readonly, retain, nonatomic) NSArray *results;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)finalizeAnalysis;
- (BOOL)decideSegmentPointBasedOn:(float)a0;
- (void)mergeSimilarSegments;
- (int)processFrameMetadata:(id)a0;

@end
