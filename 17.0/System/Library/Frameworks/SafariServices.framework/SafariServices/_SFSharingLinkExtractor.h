@class WKWebView;

@interface _SFSharingLinkExtractor : NSObject {
    WKWebView *_webView;
}

- (id)initWithWebView:(id)a0;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
