@class NSString, UIActivityIndicatorView, NSURL, WKWebView;

@interface PKBasicWebViewController : UIViewController <WKNavigationDelegate>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
