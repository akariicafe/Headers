@class WKWebView;
@protocol SFSharingExtensionWebProcessController;

@interface _SFSafariSharingExtensionController : NSObject {
    WKWebView *_webView;
    id<SFSharingExtensionWebProcessController> _extensionControllerProxy;
}

- (id)initWithWebView:(id)a0;
- (void)prepareJavaScriptWorldForSharingExtension:(id)a0 javaScript:(id)a1;
- (void).cxx_destruct;
- (void)finalizeJavaScriptForSharingExtension:(id)a0 arguments:(id)a1;
- (id)_extensionControllerProxy;
- (void)runJavaScriptForSharingExtension:(id)a0 extraArguments:(id)a1 completion:(id /* block */)a2;

@end
