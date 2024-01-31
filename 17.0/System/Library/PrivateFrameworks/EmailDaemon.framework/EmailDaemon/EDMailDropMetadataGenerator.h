@class NSString, WKWebView, EFPromise, NSMutableArray;

@interface EDMailDropMetadataGenerator : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSMutableArray *scriptHandlers;
@property (retain, nonatomic) EFPromise *activePromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)dealloc;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)generateMailDropMetadataForContentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertMailDropAttachmentViewForContentURL:(id)a0 HTMLByContentID:(id)a1 completionHandler:(id /* block */)a2;
- (void)tearDownWebView;
- (void)_addScriptHandlerForKey:(id)a0 handler:(id /* block */)a1;
- (void)_findMailDropNodesInFileURL:(id)a0 promise:(id)a1;
- (BOOL)_shouldSearchForMailDropNodesInFileURL:(id)a0;
- (id)withTimeout:(double)a0 do:(id /* block */)a1 completion:(id /* block */)a2;

@end
