@class PLAssetsdServicePermissions, PLLazyObject;

@interface PLAssetsdInnerService : NSObject {
    PLAssetsdServicePermissions *_permissions;
    long long _requiredState;
    PLLazyObject *_lazyService;
}

- (void)getInnerServiceWithContext:(id)a0 reply:(id /* block */)a1;
- (id)instantiateInnerService;
- (void).cxx_destruct;
- (void)_awaitForRequiredLibraryStateWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPermissions:(id)a0 requiredLibraryServicesState:(long long)a1 lazyService:(id)a2;

@end
