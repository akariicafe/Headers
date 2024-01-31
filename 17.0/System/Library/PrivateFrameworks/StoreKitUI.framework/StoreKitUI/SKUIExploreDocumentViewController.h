@class SKUIExploreTemplateElement, NSString, NSArray, UINavigationController, CLLocationManager, UISplitViewController, SKUIContentInsetScrollView, SKUIStorePageSectionsViewController, SKUIMetricsImpressionSession;

@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController> {
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    NSArray *_contentOffsets;
    SKUIContentInsetScrollView *_contentScrollView;
    SKUIExploreTemplateElement *_exploreTemplate;
    UINavigationController *_leftVC;
    CLLocationManager *_locationManager;
    UINavigationController *_navigationController;
    BOOL _nearMeEnabled;
    SKUIStorePageSectionsViewController *_rightVC;
    UISplitViewController *_splitVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)contentScrollView;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)loadView;
- (void)_reloadData;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setClientContext:(id)a0;
- (BOOL)splitViewController:(id)a0 shouldHideViewController:(id)a1 inOrientation:(long long)a2;
- (id)navigationBarTintColor;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (void)_contentInsetDidChange:(id)a0;
- (void)_endAllPendingActiveImpression;
- (void)_getPageComponents:(id *)a0 title:(id *)a1 forViewControllerAtIndex:(long long)a2;
- (double)_leftColumnWidth;
- (id)_leftPageComponentsAtIndex:(long long)a0;
- (id)_newSectionsViewControllerAtIndex:(long long)a0;
- (id)_pageComponentsAtIndex:(long long)a0;
- (void)_reloadLeftViewControllers;
- (void)_reloadRightViewController;
- (void)_reloadSelectionForViewController:(id)a0;
- (id)_rightPageComponents;
- (id)_rightVCColorScheme;
- (id)_rootNavigationTitle;
- (void)_updateChildViewControllers;
- (void)documentDidUpdate:(id)a0;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)a0;
- (BOOL)managesNavigationBarContents;
- (BOOL)prefersNavigationBarBackgroundViewHidden;
- (BOOL)prefersNavigationBarHidden;
- (void)selectGenreListComponent:(id)a0;
- (void)stackedBar:(id)a0 didSelectItemAtIndex:(long long)a1;

@end
