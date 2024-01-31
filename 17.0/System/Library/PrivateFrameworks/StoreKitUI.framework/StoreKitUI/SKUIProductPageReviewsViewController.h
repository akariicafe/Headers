@class SKUILayoutCache, SKUIReviewsHistogramViewController, SKUIReviewsFacebookViewController, SKUIStarRatingQueue, SKUIReviewList, NSMutableIndexSet, UIScrollView, SSVLoadURLOperation, NSString, SKComposeReviewViewController, SKUIProductPage, SKUIProductPageTableView, NSOperationQueue, SKUIClientContext, SKUIFacebookLikeStatus, SKUIIPadCustomerReviewsHeaderView, SKUIProductPageHeaderViewController;
@protocol SKUIProductPageChildViewControllerDelegate;

@interface SKUIProductPageReviewsViewController : UIViewController <SKUILayoutCacheDelegate, SKComposeReviewDelegate, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewController> {
    SKComposeReviewViewController *_composeViewController;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIReviewsFacebookViewController *_facebookViewController;
    SKUIReviewsHistogramViewController *_histogramViewController;
    BOOL _isPad;
    SKUILayoutCache *_layoutCache;
    long long _loadedPageCount;
    SSVLoadURLOperation *_loadOperation;
    SKUIReviewList *_reviewList;
    SKUIIPadCustomerReviewsHeaderView *_reviewsHeaderView;
    long long _sortOrder;
    BOOL _showAllVersions;
    SKUIStarRatingQueue *_starRatingQueue;
    SKUIProductPageTableView *_tableView;
}

@property (readonly, nonatomic) SKUIProductPage *productPage;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL askPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id<SKUIProductPageChildViewControllerDelegate> delegate;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)reloadData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)loadView;
- (void)_reloadData;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)_tableView;
- (void)reviewComposeViewControllerDidFinish:(id)a0;
- (void)_addHeaderView;
- (void)_addReviewsFromResponse:(id)a0 error:(id)a1;
- (void)_appSupportAction:(id)a0;
- (id)_bottomBorderColorForScheme:(id)a0;
- (double)_defaultPageWidth;
- (id)_histogramViewController;
- (id)_loadMoreCellForTableView:(id)a0 indexPath:(id)a1;
- (void)_loadNextPageIfNecessaryForOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_resetPersonalStarRating;
- (id)_reviewsHeaderView;
- (void)_setReviewListWithResponse:(id)a0 error:(id)a1;
- (BOOL)_shouldShowLoadMoreCell;
- (void)_sortSelectionAction:(id)a0;
- (void)_starRatingAction:(id)a0;
- (id)_textBoxCellForTableView:(id)a0 indexPath:(id)a1;
- (id)_textLayoutRequestWithText:(id)a0;
- (id)_urlStringWithPageNumber:(long long)a0;
- (void)_versionSelectionAction:(id)a0;
- (void)_writeAReviewAction:(id)a0;
- (id)initWithProductPage:(id)a0;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (void)reviewsFacebookViewControllerDidChange:(id)a0;

@end
