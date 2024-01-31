@interface LegalAndRegulatorySettingsPrivate.LRSPWKWebViewCoordinator : NSObject <WKNavigationDelegate, UIScrollViewDelegate>

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;

@end
