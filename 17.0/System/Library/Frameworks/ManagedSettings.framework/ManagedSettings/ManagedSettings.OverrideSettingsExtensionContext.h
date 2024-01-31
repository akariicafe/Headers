@interface ManagedSettings.OverrideSettingsExtensionContext : NSExtensionContext <ManagedSettings.OverrideSettingsExtensionHost, ManagedSettings.OverrideSettingsExtensionVendor> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_overrideSettingsHandler;
}

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)init;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)initWithInputItems:(id)a0;
- (void).cxx_destruct;
- (void)askToOverrideUnremovabilityOfApplicationWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 replyHandler:(id /* block */)a2;

@end
