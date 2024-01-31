@class WKWebViewConfiguration, WKWebView, NSString;
@protocol WBSWebViewMetadataFetchOperationDelegate;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate>

@property (weak, nonatomic) id<WBSWebViewMetadataFetchOperationDelegate> delegate;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } webViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)_webViewWebProcessDidCrash:(id)a0;
- (void)didCreateWebView;
- (void)_setUpWebViewAndStartOffscreenFetching;
- (void)clearWebView;
- (void)didFailFetchWithError:(id)a0;
- (void)startOffscreenFetching;
- (void)willClearWebView;

@end
