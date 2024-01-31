@class NSString, UIImpactFeedbackGenerator;
@protocol UISwitchControl;

@interface UISwitchVisualElement : UIView

@property (nonatomic) double enabledAlpha;
@property (nonatomic) BOOL enabled;
@property (copy) NSString *title;
@property (weak, nonatomic) id<UISwitchControl> switchControl;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;

+ (BOOL)isFixedSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredAlignmentRectInsets;
+ (struct CGSize { double x0; double x1; })preferredContentSize;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void)setOnImage:(id)a0;
- (void)tintColorDidChange;
- (void)setOnTintColor:(id)a0;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setShowsOnOffLabel:(BOOL)a0;
- (void)setOffImage:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setThumbTintColor:(id)a0;

@end
