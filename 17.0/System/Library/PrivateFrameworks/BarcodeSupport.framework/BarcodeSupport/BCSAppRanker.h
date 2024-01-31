@interface BCSAppRanker : NSObject

+ (id)bundleIdentifierOfLastUsedAppForURL:(id)a0;
+ (id)orderAppLinks:(id)a0 forLastUsedApp:(id)a1;
+ (id)orderApplicationRecords:(id)a0 forPreferredBundleID:(id)a1;
+ (id)orderApps:(id)a0 forLastUsedApp:(id)a1;
+ (void)setLastUsedApp:(id)a0 forURL:(id)a1;

@end
