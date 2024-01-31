@class UIVisualEffect, NSString, UIVisualEffectView, HUIconContentView;
@protocol HFIconDescriptor;

@interface HUIconView : UIView <HUIconContentViewDelegate>

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIconContentView *currentIconContentView;
@property (nonatomic) double vibrancyEffectAnimationDuration;
@property (nonatomic) long long contentMode;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic) BOOL disableContinuousAnimation;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property BOOL useIntrinsicContentSizeFromAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentContainerView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentMode:(long long)a1;
- (void)reclaimIconIfPossible;
- (void)renounceIconIfPossible;
- (void)setVibrancyEffect:(id)a0 animated:(BOOL)a1;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (id)_defaultVibrancyEffect;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)a0;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)a0 animated:(BOOL)a1;
- (void)iconContentView:(id)a0 didChangeAspectRatio:(double)a1;

@end
