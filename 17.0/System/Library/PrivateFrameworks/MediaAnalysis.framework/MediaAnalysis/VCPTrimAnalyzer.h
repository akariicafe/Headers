@class VCPSegment, VCPActionAnalyzer, NSMutableArray;

@interface VCPTrimAnalyzer : NSObject {
    VCPActionAnalyzer *_actionAnalyzer;
    NSMutableArray *_internalResults;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _bestTrimTimeRange;
    float _curationThreshold;
    BOOL _verbose;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _inTrimStart;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _inTrimEnd;
    BOOL _firstFrame;
    VCPSegment *_activeSegment;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _captureTime;
    BOOL _ready;
}

- (BOOL)isReady;
- (id)init;
- (void).cxx_destruct;
- (int)analyzeFrameWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 analysisData:(id)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })bestTrimTimeRange;
- (float)calculateCandidateScoreWithRangeAdjust:(int)a0 endIdx:(int)a1 candidateTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a2 captureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (BOOL)checkTrimAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 captureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)finalizeWithDestructiveTrimStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trimEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andCaptureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)generateCurationSegment;
- (int)generateInterestingTrimBasedOnCaptureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isCurated:(float)a0;
- (BOOL)isTimestampSkipable:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)prepareTrimmingWithTrimStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andTrimEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)printSegments:(id)a0;
- (BOOL)shouldCutAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 stillPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withCut:(BOOL)a2;
- (void)updateCurationThreshold;

@end
