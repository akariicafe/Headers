@interface SpotlightSender : NSObject

+ (void)clearCache;
+ (id)clientConnection:(long long)a0 jobType:(int)a1;
+ (BOOL)jobForAssets:(long long)a0;
+ (BOOL)jobForTest:(long long)a0;
+ (void)deleteSearchableItemsWithEncodedIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (BOOL)jobForImages:(long long)a0;
+ (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2 retainedData:(id)a3;
+ (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1 contentType:(id)a2 client:(long long)a3;
+ (id)connectionForClient:(long long)a0 jobType:(long long)a1;
+ (BOOL)jobForDuet:(long long)a0;
+ (id)clientConnection:(long long)a0;
+ (BOOL)jobForSuggestions:(long long)a0;
+ (BOOL)enabledForClient:(long long)a0;
+ (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)deleteAllSearchableItemsWithBundleID:(id)a0 client:(long long)a1;
+ (void)deleteAllUserActivities:(id)a0 client:(long long)a1;
+ (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1 client:(long long)a2;
+ (id)copyDiagnosticInfo;
+ (void)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (void)addOrUpdateSearchableItems:(id)a0 itemsContent:(id)a1 bundleID:(id)a2 protectionClass:(id)a3 client:(long long)a4;
+ (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3 client:(long long)a4;
+ (void)donateRelevantActions:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)dispatchWithOptions:(long long)a0 block:(id /* block */)a1;
+ (void)setup;

@end
