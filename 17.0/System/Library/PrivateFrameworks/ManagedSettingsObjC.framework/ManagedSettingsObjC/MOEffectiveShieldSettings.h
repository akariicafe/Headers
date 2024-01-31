@class MOEffectiveCategoryShieldPolicy, MOEffectiveArray, MOEffectiveSettingsStore;

@interface MOEffectiveShieldSettings : NSObject

@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveArray *applications;
@property (readonly) MOEffectiveCategoryShieldPolicy *applicationCategoryPolicy;
@property (readonly) MOEffectiveArray *webDomains;
@property (readonly) MOEffectiveCategoryShieldPolicy *webDomainCategoryPolicy;

+ (id)newConnection;
+ (id)configurationForBundleIdentifier:(id)a0 categoryIdentifier:(id)a1 categoryName:(id)a2 error:(id *)a3;
+ (id)configurationForCategoryIdentifier:(id)a0 categoryName:(id)a1 error:(id *)a2;
+ (id)configurationForWebDomain:(id)a0 categoryIdentifier:(id)a1 categoryName:(id)a2 error:(id *)a3;
+ (void)handleAction:(long long)a0 bundleIdentifier:(id)a1 categoryIdentifier:(id)a2 completionHandler:(id /* block */)a3;
+ (void)handleAction:(long long)a0 categoryIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)handleAction:(long long)a0 webDomain:(id)a1 categoryIdentifier:(id)a2 completionHandler:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;

@end
