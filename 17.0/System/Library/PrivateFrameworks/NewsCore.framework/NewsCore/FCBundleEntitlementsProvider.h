@class FCEntitlementService;
@protocol FCEntitlementsOverrideProviderType, FCCoreConfigurationManager;

@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType>

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, nonatomic) FCEntitlementService *entitlementService;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;

- (void)_fetchEntitlementsWithIgnoreCache:(BOOL)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)initWithConfigurationManager:(id)a0 entitlementService:(id)a1;
- (void)fetchEntitlementsWithIgnoreCache:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
