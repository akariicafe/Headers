@class NSMutableArray, CATextLayer, CAShapeLayer;

@interface CRBoxLayer : CAReplicatorLayer

@property (retain) CAShapeLayer *reticleLayer;
@property (retain) CATextLayer *codeLayer;
@property (retain) NSMutableArray *completionBlocks;
@property double demoSpeed;
@property BOOL customInit;
@property (nonatomic) double frameRatio;

+ (id)layer;

- (id)init;
- (void)dealloc;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)animatePulseColor:(id)a0;
- (void)layoutSublayers;
- (void)setString:(id)a0 mirrored:(BOOL)a1 inverted:(BOOL)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithCodeFrameRatio:(double)a0;
- (void)animateReveal;
- (void)positionForCodeBoxPoints:(id)a0;
- (void)animateToPosition:(struct CGPoint { double x0; double x1; })a0 transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 opacity:(double)a2 type:(long long)a3;
- (void)animateConceal;

@end
