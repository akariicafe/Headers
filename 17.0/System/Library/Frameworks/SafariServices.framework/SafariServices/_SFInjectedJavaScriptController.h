@class WKWebView;
@protocol SFInjectedJavaScriptWebProcessController;

@interface _SFInjectedJavaScriptController : NSObject {
    WKWebView *_webView;
    id<SFInjectedJavaScriptWebProcessController> _activityProxy;
}

- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (id)_webProcessActivityProxy;
- (void)runJavaScriptForActivity:(id)a0 withScript:(id)a1 object:(id)a2 invokeMethod:(id)a3 completionHandler:(id /* block */)a4;

@end
