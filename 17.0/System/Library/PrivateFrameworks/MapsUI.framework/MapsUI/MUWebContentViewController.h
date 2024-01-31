@class WKNavigation, NSString, MUPlaceEnrichmentActionManager, NSURL, MUWebBridge, MUWebContentTraits, MUWebViewFactoryItem, NSLayoutConstraint, UIActivityIndicatorView, WKWebView;
@protocol MUWebContentViewControllerDelegate;

@interface MUWebContentViewController : UIViewController <WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MUWebBridgeDelegate> {
    NSLayoutConstraint *_heightConstraint;
    MUWebViewFactoryItem *_webViewFactoryItem;
    WKWebView *_webView;
    MUWebBridge *_bridge;
    UIActivityIndicatorView *_activityIndicatorView;
    double _defaultHeight;
    NSURL *_resolvedURL;
    NSString *_html;
    WKNavigation *_currentWebNavigation;
    MUWebContentTraits *_webContentTraits;
}

@property (retain, nonatomic) MUPlaceEnrichmentActionManager *actionManager;
@property (weak, nonatomic) id<MUWebContentViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolvedURLForRelativeURL:(id)a0;

- (void)_cancel;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (id)initWithURL:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_setHeight:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_addLoadingSpinner;
- (void)_finishLoading;
- (void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(id /* block */)a0;
- (void)_invokeAction:(id)a0 callbackHandler:(id /* block */)a1;
- (void)_layoutAction:(id)a0 callbackHandler:(id /* block */)a1;
- (void)_propogateUserInterfaceStyleToWebModule;
- (void)_removeLoadingSpinner;
- (void)_removeModuleWithArguments:(id)a0 callbackHandler:(id /* block */)a1;
- (void)_resetBridge;
- (void)_setHeight:(id)a0 callbackHandler:(id /* block */)a1;
- (void)_startLoading;
- (void)configureWithHTML:(id)a0 actionManager:(id)a1 initialDefaultHeight:(double)a2;
- (id)initWithURL:(id)a0 traits:(id)a1;
- (BOOL)shouldAddLoadingIndicator;
- (void)updateActionOverBridge:(id)a0;
- (void)webBridgeDidConnect:(id)a0;

@end
