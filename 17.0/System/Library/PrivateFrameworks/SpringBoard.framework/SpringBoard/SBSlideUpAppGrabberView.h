@class UIImage, NSString, _SBFVibrantSettings, SBSaturatedIconView, UIView, SBUILegibilityView, _UILegibilitySettings;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView, SBUILegibility> {
    UIView *_tintView;
    UIView *_backgroundView;
    SBUILegibilityView *_legibilityView;
    SBSaturatedIconView *_saturatedIconView;
    UIImage *_grabberImage;
}

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed;
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void)setBackgroundColor:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setBackgroundView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_shouldUseVibrancy;
- (id)_lazyLegibilityView;
- (id)initWithAdditionalTopPadding:(BOOL)a0 invertVerticalInsets:(BOOL)a1;
- (void)setAppStyleGrabberImage:(id)a0;
- (void)setGrabberImageFromAppWithBundleIdentifier:(id)a0;

@end
