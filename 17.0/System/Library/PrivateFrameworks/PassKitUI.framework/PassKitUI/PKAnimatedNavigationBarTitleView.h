@class UIView;

@interface PKAnimatedNavigationBarTitleView : UIView {
    UIView *_titleView;
    int _viewState;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitleView:(id)a0 alpha:(double)a1;
- (void)setTitleView:(id)a0 animated:(BOOL)a1;

@end
