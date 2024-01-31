@interface BCSLinkItemPersistentStore : BCSPersistentStore <BCSItemCaching, BCSLinkItemCacheClearing> {
    long long _schemaVersion;
}

+ (const char *)debugQueueName;

- (const char *)schema;
- (id)init;
- (long long)schemaVersion;
- (id)databasePath;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)deleteItemMatching:(id)a0;
- (void)deleteItemsOfType:(long long)a0;
- (void)deleteLinkItemsWithBundleID:(id)a0;
- (id)itemMatching:(id)a0;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;

@end
