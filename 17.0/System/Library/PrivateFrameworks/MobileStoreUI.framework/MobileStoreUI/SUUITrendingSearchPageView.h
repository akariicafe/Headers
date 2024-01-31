@class SUUITrendingSearchView, SUUITrendingSearchPage;
@protocol SUUITrendingSearchPageViewDelegate;

@interface SUUITrendingSearchPageView : UIView {
    SUUITrendingSearchView *_trendingSearchView;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (weak, nonatomic) id<SUUITrendingSearchPageViewDelegate> delegate;
@property (retain, nonatomic) SUUITrendingSearchPage *page;

- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_buttonAction:(id)a0;

@end
