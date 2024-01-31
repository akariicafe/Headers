@class UIButton, UISearchBar;

@interface CKMNavbarCanvasView : UIView

@property (readonly, nonatomic) UISearchBar *searchBarView;
@property (readonly, nonatomic) UIButton *composeButtonView;
@property (nonatomic) BOOL shouldLayoutForCollapsedWidth;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutForDisplayBelowToolbar;
- (void)_layoutForDisplayInNavbar;
- (void)clearAllItemViews;
- (void)setComposeButtonView:(id)a0;
- (void)setSearchBarView:(id)a0;

@end
