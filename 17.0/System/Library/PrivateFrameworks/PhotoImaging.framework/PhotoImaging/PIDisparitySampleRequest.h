@interface PIDisparitySampleRequest : NURenderRequest

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sampleTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sampleRect;

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sampleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
