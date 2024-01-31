@class _UISearchBarScopeContainerLayout;

@interface _UISearchBarScopeContainerView : UIView

@property (retain, nonatomic) _UISearchBarScopeContainerLayout *layout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (BOOL)_isKnownUISearchBarComponentContainer;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
