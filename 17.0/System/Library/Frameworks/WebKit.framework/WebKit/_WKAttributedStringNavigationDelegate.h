@class NSString;

@interface _WKAttributedStringNavigationDelegate : NSObject <WKNavigationDelegate>

@property (copy, nonatomic) id /* block */ webContentProcessDidTerminate;
@property (copy, nonatomic) id /* block */ decidePolicyForNavigationAction;
@property (copy, nonatomic) id /* block */ didFailProvisionalNavigation;
@property (copy, nonatomic) id /* block */ didFailNavigation;
@property (copy, nonatomic) id /* block */ didFinishNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)dealloc;
- (void)webViewWebContentProcessDidTerminate:(id)a0;

@end
