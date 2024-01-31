@class UINavigationItem, NSString, WKWebView, UIToolbar, RUIStyle, UINavigationBar;
@protocol RemoteUIWebViewControllerDelegate;

@interface RemoteUIWebViewController : UIViewController <WKScriptMessageHandler, WKNavigationDelegate> {
    WKWebView *_webView;
    id /* block */ _loadCompletion;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
}

@property (weak, nonatomic) id<RemoteUIWebViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIToolbar *toolbar;
@property (readonly, nonatomic) WKWebView *webView;
@property (nonatomic) BOOL scalesPageToFit;
@property (retain, nonatomic) RUIStyle *style;
@property (copy, nonatomic) NSString *dismissButtonAlignment;
@property (copy, nonatomic) NSString *dismissButtonLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)loadURL:(id)a0;
- (id)navigationBar;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)navigationItem;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)donePressed:(id)a0;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (void)loadURL:(id)a0 completion:(id /* block */)a1;
- (void)_dismissWithPayload:(id)a0;
- (id)_spinnerManagerIdentifier;
- (id)scriptForJSBridge;
- (id)scriptForScalesPageToFit;

@end
