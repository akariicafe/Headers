@class AMSUIWebSafariPageModel, AMSUIWebAppearance, NSURL, NSString, UIToolbar, AMSUIWebClientContext, UIViewController, UIBarButtonItem, AMSUIWebSafariWebView;

@interface AMSUIWebSafariViewController : AMSUICommonViewController <WKNavigationDelegate, AMSUIWebSafariWebDelegate, UIAdaptivePresentationControllerDelegate, AMSUIWebPagePresenter>

@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) BOOL didHandleDismiss;
@property (retain, nonatomic) UIViewController *placeholderPage;
@property (readonly, nonatomic) AMSUIWebSafariPageModel *model;
@property (nonatomic) long long pageState;
@property (nonatomic) BOOL performingNavigation;
@property (readonly, nonatomic) UIToolbar *toolbar;
@property (readonly, nonatomic) UIBarButtonItem *toolbarLeft;
@property (readonly, nonatomic) UIBarButtonItem *toolbarRight;
@property (readonly, nonatomic) AMSUIWebSafariWebView *webView;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, nonatomic) NSURL *originalURL;
@property (nonatomic) BOOL shouldDismissOnCallback;
@property (nonatomic) BOOL shouldSetPresentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)_share:(id)a0;
- (void)_refresh:(id)a0;
- (id)initWithContext:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)loadView;
- (void)_updateButtons;
- (void).cxx_destruct;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)_dismiss;
- (void)viewDidDisappear:(BOOL)a0;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)_pop;
- (void)_cancel:(id)a0;
- (void)_handleDismiss;
- (void)_back:(id)a0;
- (BOOL)_callActionHandlerWithURL:(id)a0 error:(id)a1;
- (id)_createToolBar;
- (void)_finishedLoadingWithSuccess:(BOOL)a0;
- (void)_forward:(id)a0;
- (void)_presentActivityViewControllerWithActivityItems:(id)a0;
- (void)_presentPlaceholderModel:(id)a0;
- (void)_setupPageForWebView;
- (void)_setupSafariNavBarWithSpinner:(BOOL)a0;
- (void)_startErrorTimer;
- (void)_startLoadingWebView;
- (void)_transitionToErrorViewWithError:(id)a0;
- (void)_transitionToLoading;
- (void)_transitionToWebView;
- (void)loadActionURL:(id)a0 data:(id)a1 callbackScheme:(id)a2 actionHandler:(id /* block */)a3;
- (void)receiveCallbackURL:(id)a0;
- (void)safariView:(id)a0 didReceiveAction:(id)a1 body:(id)a2 replyHandler:(id /* block */)a3;
- (void)safariView:(id)a0 didRedirectToSchemeWithURL:(id)a1;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
