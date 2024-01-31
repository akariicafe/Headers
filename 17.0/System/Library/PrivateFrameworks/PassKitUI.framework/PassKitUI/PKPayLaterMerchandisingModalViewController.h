@class UIScrollView, NSString, PKPayLaterMerchandisingUtilities, UIActivityIndicatorView, PKPayLaterMerchandisingConfiguration, WKWebView, UIButton;

@interface PKPayLaterMerchandisingModalViewController : UIViewController <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler> {
    PKPayLaterMerchandisingConfiguration *_configuration;
    PKPayLaterMerchandisingUtilities *_utilities;
    UIActivityIndicatorView *_spinner;
    WKWebView *_webView;
    UIButton *_closeButton;
    UIScrollView *_scrollView;
    double _webViewHeight;
    long long _retryCount;
    BOOL _didChangeUserInterfaceStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)webViewDidClose:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)_calculateWebViewHeightWithCompletion:(id /* block */)a0;
- (void)_setupWebView:(id)a0;
- (void)_showSpinnerView:(BOOL)a0 showWebView:(BOOL)a1 animate:(BOOL)a2 completion:(id /* block */)a3;
- (id)_viewControllerDescription;
- (id)_webViewConfiguration;
- (BOOL)pkui_navigationBarHidden;

@end
