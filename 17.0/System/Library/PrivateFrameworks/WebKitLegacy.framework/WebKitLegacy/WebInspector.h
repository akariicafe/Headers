@class WebView, WebInspectorFrontend;

@interface WebInspector : NSObject {
    WebView *_inspectedWebView;
    WebInspectorFrontend *_frontend;
}

@property (readonly, nonatomic, getter=isOpen) BOOL open;

- (void)attach:(id)a0;
- (void)close:(id)a0;
- (void)dealloc;
- (void)detach:(id)a0;
- (void)show:(id)a0;
- (void)setFrontend:(id)a0;
- (void)showWindow;
- (void)releaseFrontend;
- (void)evaluateInFrontend:(id)a0 script:(id)a1;
- (id)initWithInspectedWebView:(id)a0;
- (void)inspectedWebViewClosed;
- (BOOL)isDebuggingJavaScript;
- (BOOL)isJavaScriptProfilingEnabled;
- (BOOL)isProfilingJavaScript;
- (BOOL)isTimelineProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(BOOL)a0;
- (void)setTimelineProfilingEnabled:(BOOL)a0;
- (void)showConsole:(id)a0;
- (void)startDebuggingJavaScript:(id)a0;
- (void)startProfilingJavaScript:(id)a0;
- (void)stopDebuggingJavaScript:(id)a0;
- (void)stopProfilingJavaScript:(id)a0;
- (void)toggleDebuggingJavaScript:(id)a0;
- (void)toggleProfilingJavaScript:(id)a0;

@end
