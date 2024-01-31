@class NSString, QLPreviewProvider;
@protocol QLPreviewingController;

@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext <QLRemotePreviewHost, QLPreviewProviderContext, QLRemotePreviewService> {
    BOOL _isObservingPreviewController;
    id _contents;
}

@property (retain, nonatomic) QLPreviewProvider<QLPreviewingController> *previewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)previewViewController;
- (id)protocolHost;
- (void)generatePreviewForURL:(id)a0 completion:(id /* block */)a1;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)setHostViewControllerProxy:(id)a0;
- (void)getARQLInlineProxy3WithCompletionHandler:(id /* block */)a0;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)_stopObservingPreviewControllerAttributeChanges;
- (void)getARQLInlineProxy2WithCompletionHandler:(id /* block */)a0;
- (void)getARQLInlineProxyWithCompletionHandler:(id /* block */)a0;
- (void)getPrinterProxyWithCompletionHandler:(id /* block */)a0;
- (void)invalidateServiceWithCompletionHandler:(id /* block */)a0;
- (void)previewControllerDidUpdatePreferredContentSize:(id)a0;
- (void)previewControllerDidUpdateTitle:(id)a0;
- (void)previewControllerWantsFullScreen:(BOOL)a0;

@end
