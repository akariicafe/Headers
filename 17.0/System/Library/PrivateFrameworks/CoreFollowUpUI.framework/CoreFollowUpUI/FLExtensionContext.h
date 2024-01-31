@class NSString;

@interface FLExtensionContext : NSExtensionContext <FLExtensionRemoteInterface> {
    id _shadowPrincipalObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)hostContextWithErrorHandler:(id /* block */)a0;
- (void)followUpPerformUpdateWithCompletionHandler:(id /* block */)a0;
- (void)processFollowUpItem:(id)a0 selectedAction:(id)a1 completion:(id /* block */)a2;
- (id)_shadowPrincipalObject;
- (id)extensionLogicProvider;
- (id)syncHostContextWithErrorHandler:(id /* block */)a0;

@end
