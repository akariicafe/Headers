@class NSString, NSArray, SUUIMetricsController, SUUIClientContext, NSOperationQueue, SUUIProductPageHeaderViewController, SUUIColorScheme, SUUIResourceLoader, SSVPlatformRequestOperation, NSMutableArray, UIScrollView;
@protocol SUUIProductPageChildViewControllerDelegate;

@interface SUUISwooshArrayViewController : UIViewController <SUUIMetricsViewController, SUUISwooshViewControllerDelegate, UIScrollViewDelegate, SUUIProductPageChildViewController> {
    SUUIResourceLoader *_artworkLoader;
    SSVPlatformRequestOperation *_platformOperation;
    UIScrollView *_scrollView;
    NSMutableArray *_swooshArtworkLoaders;
    NSMutableArray *_viewControllers;
}

@property (copy, nonatomic) NSArray *swooshComponents;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) SUUIMetricsController *metricsController;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;
@property (weak, nonatomic) id<SUUIProductPageChildViewControllerDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL askPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SUUIProductPageHeaderViewController *headerViewController;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)_scrollView;
- (void)loadView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_addHeaderView;
- (void)_addMissingItemsWithResponse:(id)a0 error:(id)a1;
- (id)_artworkLoader;
- (id)_clickEventForSeeAllForViewController:(id)a0;
- (id)_clickEventWithItem:(id)a0;
- (void)_layoutSwooshViews;
- (void)_loadMissingItemsIfNecessary;
- (void)_reloadChildViewControllers;
- (id)activeMetricsController;
- (id)initWithSwooshComponents:(id)a0;
- (BOOL)isSkLoaded;
- (void)loadMissingItemData;
- (void)swoosh:(id)a0 didSelectCellAtIndex:(long long)a1;
- (id)swoosh:(id)a0 imageForCellAtIndex:(long long)a1;
- (void)swooshDidSelectSeeAll:(id)a0;

@end
