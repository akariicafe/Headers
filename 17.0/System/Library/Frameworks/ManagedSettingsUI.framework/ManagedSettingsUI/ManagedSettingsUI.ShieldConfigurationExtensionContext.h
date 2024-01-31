@interface ManagedSettingsUI.ShieldConfigurationExtensionContext : NSExtensionContext <ManagedSettingsUI.ShieldConfigurationExtensionHost, ManagedSettingsUI.ShieldConfigurationExtensionVendor> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_shieldConfigurationDataSource;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)init;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)initWithInputItems:(id)a0;
- (void).cxx_destruct;
- (void)fetchConfigurationDataForApplication:(id)a0 localizedApplicationDisplayName:(id)a1 categoryTokenData:(id)a2 localizedCategoryDisplayName:(id)a3 replyHandler:(id /* block */)a4;
- (void)fetchConfigurationDataForApplication:(id)a0 tokenData:(id)a1 localizedDisplayName:(id)a2 replyHandler:(id /* block */)a3;
- (void)fetchConfigurationDataForWebDomain:(id)a0 categoryTokenData:(id)a1 localizedDisplayName:(id)a2 replyHandler:(id /* block */)a3;
- (void)fetchConfigurationDataForWebDomain:(id)a0 tokenData:(id)a1 replyHandler:(id /* block */)a2;

@end
