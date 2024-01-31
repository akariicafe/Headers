@class UIImageView, CAEmitterLayer, PKDynamicContentView, PKDynamicLayerTransactionEffectConfiguration, CALayer, CAGradientLayer, PKDynamicLayerConfiguration, PKDynamicLayerCrossDissolveConfiguration, UIMotionEffectGroup, PKPass, NSData, _UIParallaxMotionEffect, UIImage;

@interface PKDynamicLayerView : UIView {
    PKPass *_pass;
    PKDynamicContentView *_backgroundParallaxView;
    UIImageView *_backgroundParallaxCrossDissolveView;
    CAGradientLayer *_backgroundRadialGradientLayer;
    PKDynamicContentView *_neutralView;
    PKDynamicContentView *_foregroundParallaxView;
    UIImageView *_foregroundParallaxCrossDissolveView;
    CAGradientLayer *_foregroundRadialGradientLayer;
    PKDynamicContentView *_staticOverlayView;
    UIImageView *_staticFallbackView;
    PKDynamicLayerConfiguration *_dynamicLayerConfiguration;
    PKDynamicLayerTransactionEffectConfiguration *_transactionEffectConfiguration;
    PKDynamicLayerCrossDissolveConfiguration *_crossDissolveConfiguration;
    UIImage *_transactionEffectEmitterImage;
    NSData *_transactionEffectShapeData;
    CAEmitterLayer *_transactionEffectLayer;
    CALayer *_dimmingLayer;
    _UIParallaxMotionEffect *_bottomEffect;
    _UIParallaxMotionEffect *_topEffect;
    UIMotionEffectGroup *_radialMaskEffects;
    struct UIOffset { double horizontal; double vertical; } _parallaxOffset;
    BOOL _invalidated;
    BOOL _paused;
    BOOL _loaded;
    BOOL _effectiveMotionEnabled;
}

@property (nonatomic) BOOL automaticallyLoadContent;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateVisibility;
- (void)didMoveToWindow;
- (void)_configureViews;
- (void)_addParallaxAndMotionEffects;
- (void)_addRadialMaskEffectsToView:(id)a0;
- (void)_configureDynamicViewsWithImageSet:(id)a0;
- (id)_configureMotionEffectGroupForCrossDissolveConfiguration:(id)a0;
- (id)_dimmingLayerAnimationWithDuration:(double)a0;
- (void)_removeParallaxMotionEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pass:(id)a1 automaticallyLoadContent:(BOOL)a2;
- (void)loadContent;
- (void)runTransactionEffect;

@end
