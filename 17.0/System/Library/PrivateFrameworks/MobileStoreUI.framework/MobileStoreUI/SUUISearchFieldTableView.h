@class SUUITrendingSearchPageView, SUUITrendingSearchProvider, SUUITrendingSearchPage;
@protocol SUUITrendingSearchPageViewDelegate;

@interface SUUISearchFieldTableView : UITableView {
    SUUITrendingSearchPage *_page;
    SUUITrendingSearchPageView *_pageView;
}

@property (retain, nonatomic) SUUITrendingSearchProvider *trendingSearchProvider;
@property (weak, nonatomic) id<SUUITrendingSearchPageViewDelegate> trendingSearchDelegate;
@property (nonatomic) BOOL trendingSearchesVisible;

- (void)_reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)a0 error:(id)a1;

@end
