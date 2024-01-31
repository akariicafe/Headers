@class PKMobileAssetManager;

@interface PKMAEntitlementTemplateManager : NSObject {
    PKMobileAssetManager *_mobileAssetManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)_templatesFromAssetBundle:(id)a0;
- (id)cachedEntitlementTemplates;
- (void)entitlementTemplates:(id /* block */)a0;

@end
