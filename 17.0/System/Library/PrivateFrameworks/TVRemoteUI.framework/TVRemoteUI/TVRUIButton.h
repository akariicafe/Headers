@class UIColor, NSString, UIImageView, UIViewPropertyAnimator, TVRButtonHaptic, UILabel;
@protocol TVRUIStyleProvider;

@interface TVRUIButton : UIControl <UIPointerInteractionDelegate>

@property (retain, nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *unhighlightAnimator;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (retain, nonatomic) TVRButtonHaptic *haptic;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic, getter=hasTapAction) BOOL tapAction;
@property (nonatomic, getter=isHighlightEffectDisabled) BOOL disableHighlightEffect;
@property (nonatomic) BOOL hasButtonShape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)buttonTypeHasTapAction:(long long)a0;
+ (BOOL)isValidButtonType:(long long)a0;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)_descriptionBuilder;
- (void)_largeTextEnabledStatusChanged:(id)a0;
- (id)_accessibilityHintForButtonType:(long long)a0;
- (id)_accessibilityIDForButtonType:(long long)a0;
- (id)_accessibilityLabelForButtonType:(long long)a0;
- (void)_boldTextEnabledStatusChanged:(id)a0;
- (void)_darkenSystemColorsChanged:(id)a0;
- (id)_hapticForButtonType:(long long)a0;
- (id)_pointerEffectForButtonType:(long long)a0 targetedPreview:(id)a1;
- (void)_touchDown:(id)a0;
- (void)_touchUp:(id)a0;
- (void)_updateButtonType:(long long)a0;
- (id)initWithType:(long long)a0 hasTapAction:(BOOL)a1;

@end
