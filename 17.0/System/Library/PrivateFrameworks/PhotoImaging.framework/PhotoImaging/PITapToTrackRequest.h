@interface PITapToTrackRequest : NURenderRequest

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedImagePoint;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 pointToTrack:(struct CGPoint { double x0; double x1; })a2;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
