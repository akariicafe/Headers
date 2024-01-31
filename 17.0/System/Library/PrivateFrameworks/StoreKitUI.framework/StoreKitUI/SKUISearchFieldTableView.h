@class SKUITrendingSearchProvider, SKUITrendingSearchPageView, SKUITrendingSearchPage;
@protocol SKUITrendingSearchPageViewDelegate;

@interface SKUISearchFieldTableView : UITableView {
    SKUITrendingSearchPage *_page;
    SKUITrendingSearchPageView *_pageView;
}

@property (retain, nonatomic) SKUITrendingSearchProvider *trendingSearchProvider;
@property (weak, nonatomic) id<SKUITrendingSearchPageViewDelegate> trendingSearchDelegate;
@property (nonatomic) BOOL trendingSearchesVisible;

- (void)_reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)a0 error:(id)a1;

@end
