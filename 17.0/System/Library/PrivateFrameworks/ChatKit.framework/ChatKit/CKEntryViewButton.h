@class CKEntryViewBlurrableButtonContainer, UIVisualEffectView, NSString, UIButton;

@interface CKEntryViewButton : UIView <UIPointerInteractionDelegate>

@property (nonatomic) long long entryViewButtonType;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) CKEntryViewBlurrableButtonContainer *blurrableButtonContainer;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (nonatomic) BOOL needsOversizedBlurContainer;
@property (nonatomic) char ckTintColor;
@property (nonatomic) BOOL wantsVibrancy;
@property (nonatomic) double blurRadius;
@property (nonatomic, getter=isEnabled, setter=setEnabled:) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryViewButtonImageForType:(long long)a0;
+ (id)entryViewButtonImageForType:(long long)a0 color:(char)a1;
+ (id)entryViewButtonImageWithName:(id)a0 tintColor:(char)a1 shouldSuppressHairline:(BOOL)a2;
+ (id)entryViewButtonOfType:(long long)a0;
+ (id)entryViewButtonOfType:(long long)a0 wantsVibrancy:(BOOL)a1;
+ (id)imageNameForEntryViewButtonType:(long long)a0;
+ (id)overlayImageForImageNamed:(id)a0 tintColor:(char)a1;
+ (void)prewarmEntryViewButtons;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDefaultImage;
- (void)configureForAnimatableBlur;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wantsVibrancy:(BOOL)a1;
- (id)pointerInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)setTintedImageForButtonType:(long long)a0 tintColor:(char)a1;
- (void)setupCompositeFilterForButton;

@end
