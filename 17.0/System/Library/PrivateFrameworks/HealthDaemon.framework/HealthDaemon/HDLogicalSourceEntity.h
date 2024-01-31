@interface HDLogicalSourceEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)ownerBundleIDForLogicalSourceID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)logicalSourceIDForBundleIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteLogicalSourceEntitiesIfNecessaryWithTransaction:(id)a0 error:(id *)a1;
+ (id)bundleIDForLogicalSourceID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)lookUpOrCreateLogicalSourceWithBundleIdentifier:(id)a0 owningAppBundleIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
