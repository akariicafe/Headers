@class UIView, UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {
    double _offsetForNoResultsMessage;
    UIView *_topShadowView;
}

@property (weak, nonatomic) UISearchDisplayController *controller;
@property (retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_numberOfRowsDidChange;
- (double)_offsetForNoResultsMessage;
- (void)_setOffsetForNoResultsMessage:(double)a0;

@end
