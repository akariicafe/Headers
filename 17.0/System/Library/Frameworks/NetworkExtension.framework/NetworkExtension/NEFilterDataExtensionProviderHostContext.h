@class NSString;

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)report:(id)a0;
- (void)applySettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchCurrentRulesForFlow:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchProviderConnectionWithCompletionHandler:(id /* block */)a0;
- (void)getSourceAppInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleRulesChanged;
- (void)provideRemediationMap:(id)a0;
- (void)provideURLAppendStringMap:(id)a0;
- (void)providerControlSocketFileHandle:(id)a0;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;

@end
