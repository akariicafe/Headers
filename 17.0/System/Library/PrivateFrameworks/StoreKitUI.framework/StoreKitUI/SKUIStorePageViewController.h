@class NSString, SSMetricsPageEvent, SSVLoadURLOperation, UIRefreshControl, SKUIClientContext, NSOperationQueue, SKUIStorePage, NSURLRequest, SKUIMetricsController, NSDictionary, SKUIColorScheme, SKUIStorePageSectionsViewController;
@protocol SKUIStorePageDelegate;

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration> {
    NSString *_lastDataConsumerClassName;
    SSMetricsPageEvent *_lastPageEvent;
    NSURLRequest *_lastRequest;
    BOOL _loadOnAppear;
    SSVLoadURLOperation *_loadOperation;
    SKUIMetricsController *_metricsController;
    NSString *_performanceTestName;
    NSDictionary *_performanceTestOptions;
    SKUIColorScheme *_placeholderColorScheme;
    SKUIStorePageSectionsViewController *_sectionsViewController;
}

@property (readonly, nonatomic, getter=isSkLoading) BOOL skLoading;
@property (copy, nonatomic) SKUIStorePage *storePage;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIStorePageDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;

- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)setMetricsController:(id)a0;
- (id)_colorScheme;
- (void)_metricsEnterEventNotification:(id)a0;
- (void)_runScrollTestWithName:(id)a0 options:(id)a1;
- (void)_showProductPage:(id)a0 withPageEvent:(id)a1;
- (void)_loadWithOperation:(id)a0 completionBlock:(id /* block */)a1;
- (void)_recordMetricsPageEvent:(id)a0 forStorePage:(id)a1;
- (void)_reloadStorePage;
- (void)_runPerformanceTestAfterIdle;
- (void)_runPerformanceTestAfterPageLoad;
- (id)_sectionsViewController;
- (void)_setMetricsController:(id)a0;
- (void)_setStorePage:(id)a0 error:(id)a1;
- (id)activeMetricsController;
- (void)cancelPageLoad;
- (void)loadURL:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)loadURL:(id)a0 withDataConsumer:(id)a1 completionBlock:(id /* block */)a2;
- (void)loadURLRequest:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)loadURLRequest:(id)a0 withDataConsumer:(id)a1 completionBlock:(id /* block */)a2;
- (void)loadWithJSONData:(id)a0 fromOperation:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)performTestWithName:(id)a0 options:(id)a1;
- (BOOL)sectionsViewController:(id)a0 showProductPageForItem:(id)a1;
- (BOOL)sectionsViewController:(id)a0 showStorePageForURL:(id)a1;
- (void)sectionsViewControllerDidDismissOverlayController:(id)a0;

@end
