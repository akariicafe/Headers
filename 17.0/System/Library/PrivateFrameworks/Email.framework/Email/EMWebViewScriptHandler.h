@class NSString, WKWebView;

@interface EMWebViewScriptHandler : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addScriptHandlerForWebView:(id)a0 key:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
