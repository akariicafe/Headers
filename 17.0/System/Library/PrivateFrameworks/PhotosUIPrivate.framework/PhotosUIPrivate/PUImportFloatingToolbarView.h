@class NSArray, UIVisualEffectView, UIToolbar, UIView, NSString;

@interface PUImportFloatingToolbarView : UIView

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIView *shadowView;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL shouldBlurBackground;
@property (copy, nonatomic) NSString *backdropViewGroupName;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (void)_updateBackground;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateBackdropViewGroupName;

@end
