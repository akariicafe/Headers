@class CSMagSafeAccessoryConfiguration, CABackdropLayer, CALayer, CSMagSafeSilhouetteConfiguration, CSRingLayer;

@interface CSMagSafeAccessoryWalletView : CSMagSafeAccessoryView

@property (retain, nonatomic) CABackdropLayer *averageColorBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *backgroundBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *trackRingBlurBackdropLayer;
@property (retain, nonatomic) CSRingLayer *trackRingBlurLayer;
@property (retain, nonatomic) CALayer *walletLayer;
@property (retain, nonatomic) CSRingLayer *trackRing;
@property (retain, nonatomic) CSMagSafeAccessoryConfiguration *configuration;
@property (retain, nonatomic) CSMagSafeSilhouetteConfiguration *silhouette;

- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_runAnimationWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_dismissAnimation;
- (void)_presentAnimation;
- (double)animationDurationBeforeDismissal;

@end
