@interface VCPSegment : NSObject {
    float _sumOfScore;
}

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) unsigned long long numOfFrames;
@property (readonly, nonatomic) unsigned long long numOfValidFrames;
@property (nonatomic) float curationScore;

- (id)init;
- (float)score;
- (void)updateDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)copyFrom:(id)a0;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 score:(float)a1 valid:(BOOL)a2;
- (BOOL)isContentTooShort;
- (void)mergeSegment:(id)a0;
- (float)sumOfScore;
- (void)trimSegment:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromStart:(BOOL)a1;
- (void)updateSegment:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 score:(float)a1 valid:(BOOL)a2;
- (void)updateWithFirstFrame:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 score:(float)a1 valid:(BOOL)a2;

@end
