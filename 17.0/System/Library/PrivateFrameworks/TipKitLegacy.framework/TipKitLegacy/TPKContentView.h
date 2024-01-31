@class UIColor, UIVisualEffect, UIImageView, UITraitCollection;

@interface TPKContentView : TPKBaseContentView {
    void /* unknown type, empty encoding */ preferredTraitCollection;
    void /* unknown type, empty encoding */ displayBottomSeparator;
    void /* unknown type, empty encoding */ imageProxy;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } defaultMicaSize;

@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic) BOOL displaysBottomSeparator;
@property (nonatomic, retain) UIColor *preferredActionTintColor;
@property (nonatomic, retain) UIColor *preferredIconImageTintColor;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredMicaLayerSize;
@property (nonatomic, retain) UITraitCollection *_preferredTraitCollection;
@property (nonatomic, retain) UIVisualEffect *visualEffect;

+ (id)SiriIconWithTraitCollection:(id)a0;
+ (id)TipsIconWithTraitCollection:(id)a0;

- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;
- (id)initWithReusableTipView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithController:(id)a0 content:(id)a1;
- (void)monitorDeviceOrientationChanges;
- (void)updatePreferredTraitCollection:(id)a0;
- (void)bottomSeperatorNeedsUpdate;
- (id)createHostingView;
- (void)setupHostingViewWithController:(id)a0 content:(id)a1;
- (void)updateDisplaysBottomSeparator:(BOOL)a0;

@end
