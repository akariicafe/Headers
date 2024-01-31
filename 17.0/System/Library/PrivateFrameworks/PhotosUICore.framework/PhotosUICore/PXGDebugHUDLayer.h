@class NSArray;

@interface PXGDebugHUDLayer : CALayer

@property (copy, nonatomic) NSArray *graphLayers;
@property (nonatomic) struct CGColor { } *green;
@property (nonatomic) struct CGColor { } *yellow;
@property (nonatomic) struct CGColor { } *red;

- (id)init;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateDebugHUDWithStats:(struct { double x0[6]; double x1[6]; long long x2[6]; double x3[6]; double x4[6]; } *)a0;
- (void)updateLayerAtIndex:(long long)a0 time:(double)a1 redZone:(double)a2 yellowZone:(double)a3;

@end
