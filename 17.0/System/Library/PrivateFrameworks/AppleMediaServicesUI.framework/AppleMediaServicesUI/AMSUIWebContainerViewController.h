@class AMSUIWebNavigationBarModel, UINavigationItem, AMSUIWebAppearance, AMSPageRenderMetricsPresenter, NSString, NSDictionary, AMSBinaryPromise, AMSUIWebClientContext, UIViewController;
@protocol AMSUIWebPresentationDelegate, AMSUIWebPagePresenter;

@interface AMSUIWebContainerViewController : AMSUICommonViewController <PSStateRestoration, UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) AMSBinaryPromise *activeRefresh;
@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) BOOL didAppearOnce;
@property (nonatomic) BOOL dismissCalled;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) UIViewController *hiddenViewController;
@property (weak, nonatomic) UINavigationItem *lastNavigationItem;
@property (nonatomic) long long lastNavigationStyle;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel;
@property (nonatomic) struct CGPoint { double x; double y; } scrollPosition;
@property (readonly, nonatomic) unsigned long long activePresentationType;
@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (nonatomic) long long containerIndex;
@property (retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *containedViewController;
@property (nonatomic) long long disableReappearPlaceholder;
@property (weak, nonatomic) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *modalPresentationDelegate;
@property (weak, nonatomic) AMSUIWebContainerViewController *nextContainer;
@property (retain, nonatomic) NSDictionary *pageInfo;
@property (readonly, nonatomic) NSDictionary *pageMetrics;
@property (retain, nonatomic) AMSPageRenderMetricsPresenter *pageRenderPresenter;
@property (weak, nonatomic) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *pushPresentationDelegate;
@property (nonatomic) BOOL shouldSkipInitialRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)navigationItem;
- (BOOL)canBeShownFromSuspendedState;
- (void)_adjustWebViewScrollFor:(id)a0 completion:(id /* block */)a1;
- (void)_applyAppearance;
- (id)_buttonModelForBarButtonItemModel:(id)a0;
- (id)_createBarButtonItemWithModel:(id)a0;
- (unsigned long long)_determineActivePresentationType;
- (void)_handlePushDismissal;
- (id)_makeCustomNavigationBarAppearanceWithModel:(id)a0;
- (void)_postEvent:(id)a0;
- (void)_prepareToMoveWebViewToVC:(id)a0 completion:(id /* block */)a1;
- (void)_refreshForInitialAppear;
- (id)_refreshWithOptions:(id)a0;
- (void)_scrollTo:(struct CGPoint { double x0; double x1; })a0 webView:(id)a1 completion:(id /* block */)a2;
- (void)_setupNavBarAnimated:(BOOL)a0;
- (void)applyNavigationModel:(id)a0;
- (void)cacheScrollViewPositionFor:(id)a0;
- (void)contentWasReplacedAnimated:(BOOL)a0;
- (void)didDismissController:(id)a0;
- (void)handleModalDismissal;
- (id)initWithViewController:(id)a0 appearance:(id)a1 navigationBar:(id)a2 context:(id)a3;
- (void)replaceContentWithViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupToolbarAnimated:(BOOL)a0;
- (void)updateSafeAreaEdgesForPageModel:(id)a0;

@end
