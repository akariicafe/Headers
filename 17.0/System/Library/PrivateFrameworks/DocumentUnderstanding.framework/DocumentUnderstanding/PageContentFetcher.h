@class NSString, WKWebView, NSMutableData;

@interface PageContentFetcher : NSObject <WKNavigationDelegate> {
    WKWebView *_webView;
    NSMutableData *_data;
    NSString *_providedJavaScript;
    id /* block */ _pendingBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_copyDefaultWebViewConfiguration;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)init;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)runJavaScriptOnHTML:(id)a0 javaScript:(id)a1 completionHandler:(id /* block */)a2;

@end
