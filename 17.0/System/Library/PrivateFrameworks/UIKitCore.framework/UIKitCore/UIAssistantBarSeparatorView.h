@class UIView;

@interface UIAssistantBarSeparatorView : UIView

@property (retain, nonatomic) UIView *innerSeparatorView;

+ (double)preferredWidth;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_usesLightStyle;
- (void).cxx_destruct;
- (void)_updateVisualStyle;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
