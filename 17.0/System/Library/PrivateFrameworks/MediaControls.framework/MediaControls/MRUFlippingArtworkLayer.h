@class CATransformLayer, CAFilter, NSString, CALayer;

@interface MRUFlippingArtworkLayer : CALayer

@property (retain, nonatomic) CATransformLayer *rotatorLayer;
@property (retain, nonatomic) CALayer *frontLayer;
@property (retain, nonatomic) CALayer *backLayer;
@property (retain, nonatomic) CALayer *frontPlaceholderLayer;
@property (retain, nonatomic) CALayer *backPlaceholderLayer;
@property (retain, nonatomic) CALayer *frontGlowLayer;
@property (retain, nonatomic) CALayer *backGlowLayer;
@property (retain, nonatomic) CAFilter *frontBlurFilter;
@property (retain, nonatomic) CAFilter *backBlurFilter;
@property (nonatomic) struct { NSString *identifier; double frontLayerAlpha; double backLayerAlpha; double frontLayerBlurRadius; double frontLayerBlurAnimationDelay; double backLayerBlurRadius; double backLayerBlurAnimationDelay; double yRotation; } state;
@property (nonatomic) double artworkCornerRadius;
@property (nonatomic) BOOL playing;
@property (nonatomic) struct CGImage { } *placeholderImage;
@property (nonatomic) struct CGColor { } *placeholderImageTintColor;

- (void)setContentsScale:(double)a0;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })nextState;
- (void)animateGlowForState:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0 reverse:(BOOL)a1;
- (id)glowLayerForState:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0;
- (id)imageLayerForState:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0;
- (BOOL)isLayerForStateGlowing:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0;
- (id)makeBlurFilter;
- (id)placeholderLayerForState:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0;
- (void)setImage:(struct CGImage { } *)a0 toLayer:(id)a1;
- (void)setImageToCurrentLayer:(struct CGImage { } *)a0 animated:(BOOL)a1;
- (void)setState:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0 transitionDirection:(long long)a1;
- (void)transitionToImage:(struct CGImage { } *)a0;
- (void)transitionToImage:(struct CGImage { } *)a0 transitionDirection:(long long)a1;
- (void)updateGlowForState:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0 reverse:(BOOL)a1 animated:(BOOL)a2;
- (void)updateScale;
- (void)updateStateWithPreviousState:(struct { id x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })a0 transitionDirection:(long long)a1;

@end
