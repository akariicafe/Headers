@class AMSProcessInfo, NSString, NSURL, AMSUIWebContainerViewController, AMSUIWebAppearance, NSDictionary, AMSBagKeySet, AMSUIWebClientContext, UIViewController, AMSUIWebPageViewController, UILabel, ACAccount;
@protocol AMSBagProtocol, AMSUIWebDelegate;

@interface AMSUIWebViewController : AMSUICommonViewController <AMSUIWebActionRunnerDelegate, AMSUIWebPageViewControllerDelegate, AMSUIWebProtocolDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate, PSStateRestoration, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) UILabel *automationView;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) UIViewController *childViewController;
@property (nonatomic) long long currentLoadState;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) NSURL *lastLoadedURL;
@property (readonly, nonatomic) AMSUIWebContainerViewController *rootContainer;
@property (readonly, nonatomic) AMSUIWebPageViewController *webPage;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *clientOptions;
@property (weak, nonatomic) id<AMSUIWebDelegate> delegate;
@property (nonatomic) BOOL loadUsingWebKit;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (retain, nonatomic) NSDictionary *clientData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)verifyTrustedURL:(id)a0 bag:(id)a1;

- (id)loadURL:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithBag:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)loadView;
- (id)presentingSceneIdentifier;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)_dismiss;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)loadRequest:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)initWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;
- (id)loadBagValue:(id)a0;
- (void)_handleDidEncodeNetworkRequest:(id)a0;
- (id)_parseWebPropertiesFromRequest:(id)a0;
- (void)action:(id)a0 didEncodeNetworkRequest:(id)a1;
- (id)_applyMappingsToURL:(id)a0;
- (id)_buildRequestWithRequest:(id)a0 bagValue:(id)a1;
- (id)_handleAuthenticateCloudRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_handleAuthenticateRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_handleDialogRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_handleEngagementRequest:(id)a0 pauseTimeouts:(BOOL)a1;
- (id)_lazyPromiseForBagSnapshot;
- (id)_lazyPromiseForLoadingRequest:(id)a0 bagValue:(id)a1;
- (id)_lazyPromiseForLoadingSession;
- (id)_lazyPromiseForPageLoad;
- (id)_loadMescalSessionForRequestWithURL:(id)a0;
- (id)_loadRequest:(id)a0 bagValue:(id)a1;
- (id)_rootNavigationController;
- (void)_showErrorViewWithError:(id)a0 request:(id)a1 bagValue:(id)a2;
- (id)_stringForLoadState:(long long)a0;
- (id)action:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (id)action:(id)a0 handleActionObject:(id)a1;
- (id)action:(id)a0 pauseTimeouts:(BOOL)a1 handleAuthenticateCloudRequest:(id)a2;
- (id)action:(id)a0 pauseTimeouts:(BOOL)a1 handleAuthenticateRequest:(id)a2;
- (id)action:(id)a0 pauseTimeouts:(BOOL)a1 handleDialogRequest:(id)a2;
- (void)actionDidFinishPurchaseWithResult:(id)a0 error:(id)a1;
- (void)protocolHandler:(id)a0 didEncodeNetworkRequest:(id)a1;
- (id)runJSRequest:(id)a0;
- (void)webPageViewController:(id)a0 didEncodeNetworkRequest:(id)a1;

@end
