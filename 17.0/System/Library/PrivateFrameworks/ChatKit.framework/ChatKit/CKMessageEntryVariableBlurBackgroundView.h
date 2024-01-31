@class NSString, UIImageView, UIVisualEffectView, UITraitCollection;

@interface CKMessageEntryVariableBlurBackgroundView : UIView <CKMessageEntryBackgroundViewProtocol>

@property (retain, nonatomic) UIVisualEffectView *variableBlurEffectView;
@property (retain, nonatomic) UIImageView *variableBlurColorOverlayView;
@property (retain, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) UITraitCollection *entryViewTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long style;

+ (id)createVerticalGradientImageWithHeight:(double)a0 scale:(double)a1 bottomSolidAreaHeight:(double)a2 gradientLocationPoints:(id)a3 gradientAlphaValues:(id)a4 color:(id)a5;

- (id)init;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)inputAccessoryViewBackdropColor;
- (id)inputAccessoryViewBackdropEffects;
- (void)_updateVariableBlurImage;

@end
