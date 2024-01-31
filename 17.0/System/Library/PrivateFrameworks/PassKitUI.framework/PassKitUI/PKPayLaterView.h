@class NSDecimalNumber, NSString, UIActivityIndicatorView, WKWebView, PKPayLaterMerchandisingUtilities;
@protocol PKPayLaterViewDelegate, PKPayLaterViewInternalDelegate;

@interface PKPayLaterView : UIView <WKScriptMessageHandler, WKNavigationDelegate, WKUIDelegate> {
    WKWebView *_webView;
    UIActivityIndicatorView *_spinner;
    BOOL _didFinishInitialViewLoad;
    struct CGSize { double width; double height; } _size;
    long long _documentReadyCounter;
    PKPayLaterMerchandisingUtilities *_utilities;
}

@property (nonatomic) id<PKPayLaterViewInternalDelegate> internalDelegate;
@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long theme;
@property (nonatomic) id<PKPayLaterViewDelegate> delegate;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) long long displayStyle;
@property (nonatomic) long long action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showSpinnerView:(BOOL)a0 spinnerView:(id)a1 showWebView:(BOOL)a2 webView:(id)a3 animate:(BOOL)a4 completion:(id /* block */)a5;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_configuration;
- (void).cxx_destruct;
- (void)webViewDidClose:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)_recalculateSizeWithCompletion:(id /* block */)a0;
- (id)_javaScriptQueryForUpdatedConfigurationProperty:(unsigned long long)a0 configuration:(id)a1;
- (void)_registerForUserInterfaceStyleChanges;
- (void)_reloadViewContentsForProperty:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_setupWebView:(id)a0 completion:(id /* block */)a1;
- (id)_webViewConfiguration;
- (void)clearWebViewCache;

@end
