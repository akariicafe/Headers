@class FBSOpenApplicationService;

@interface SSDittoRemoteConnection : NSObject {
    FBSOpenApplicationService *_openApplicationService;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendDittoProcessDocumentUpdate:(id)a0;
- (void)_sendAction:(id)a0;
- (void)_sendAction:(id)a0 completion:(id /* block */)a1;
- (void)preheatDittoProcess;
- (void)sendDittoProcessEnvironmentDescription:(id)a0 completion:(id /* block */)a1;
- (void)sendDittoProcessImageIdentifierUpdate:(id)a0;
- (void)sendDittoProcessMetadataUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendDittoProcessPreheatRequestWithPresentationMode:(unsigned long long)a0 completion:(id /* block */)a1;

@end
