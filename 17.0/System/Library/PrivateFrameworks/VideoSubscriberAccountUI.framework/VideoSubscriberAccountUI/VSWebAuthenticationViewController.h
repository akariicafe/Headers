@class NSString, UIActivityIndicatorView, WKWebView, VSWebAuthenticationViewModel;
@protocol VSAuthenticationViewControllerDelegate;

@interface VSWebAuthenticationViewController : UIViewController <WKNavigationDelegate, VSMessageQueueDelegate, VSWebAuthenticationViewController>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VSWebAuthenticationViewModel *viewModel;
@property (weak, nonatomic) id<VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredLogoSize;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_sendMessage:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (void)_stopObservingViewModel:(id)a0;
- (void)_didEndActivity;
- (id)_canonicalRequestForRequest:(id)a0;
- (void)_didBeginActivity;
- (void)_retrieveMessages;
- (void)_sendMessages:(id)a0;
- (void)didAddMessagesToMessageQueue:(id)a0;

@end
