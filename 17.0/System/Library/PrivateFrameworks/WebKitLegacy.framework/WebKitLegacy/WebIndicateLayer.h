@class WebView;

@interface WebIndicateLayer : CALayer {
    WebView *_webView;
}

- (id)initWithWebView:(id)a0;
- (void)layoutSublayers;
- (id)actionForKey:(id)a0;

@end
