@class UISearchBar, NSLayoutConstraint;

@interface STSSearchBrowserHeaderView : UIView {
    NSLayoutConstraint *_searchBarHeight;
}

@property (readonly, nonatomic) UISearchBar *searchBar;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
