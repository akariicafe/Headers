@class NSString, UIActivityIndicatorView, WKWebView, NDOWarranty, UINavigationItem, UINavigationBar;
@protocol NDOAppleCareWebViewPresenterProtocol;

@interface NDOAppleCareWebViewController : UIViewController <UINavigationBarDelegate, WKNavigationDelegate>

@property (retain) NDOWarranty *warranty;
@property (retain) NSString *serialNumber;
@property (retain) NSString *params;
@property (weak) WKWebView *webview;
@property (weak) UINavigationBar *headerView;
@property (retain) UINavigationItem *webViewNavigationItem;
@property (weak, nonatomic) UIActivityIndicatorView *spinner;
@property BOOL initialLoadCompleted;
@property (retain) NSString *source;
@property int retriesRemaining;
@property (weak) id<NDOAppleCareWebViewPresenterProtocol> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)setIsLoading:(BOOL)a0;
- (void)viewDidLoad;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)navigationBar:(id)a0 shouldPopItem:(id)a1;
- (void)cancelTapped:(id)a0;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1 params:(id)a2;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1 params:(id)a2 source:(id)a3;
- (void)loadWebview:(BOOL)a0;

@end
