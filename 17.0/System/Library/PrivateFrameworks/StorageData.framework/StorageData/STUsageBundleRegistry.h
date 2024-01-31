@class NSDictionary;

@interface STUsageBundleRegistry : NSObject

@property (retain) NSDictionary *reporters;
@property (retain) NSDictionary *usageApps;

- (id)init;
- (void).cxx_destruct;
- (id)allAppsWithUsageBundles;
- (id)loadBundlesForReporters:(id)a0;
- (id)loadReporters;
- (id)usageBundleForIdentifier:(id)a0;

@end
