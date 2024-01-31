@interface HDAppSubscriptionEntity : HDHealthEntity

+ (id)databaseTable;
+ (BOOL)setLastAnchor:(id)a0 lastAckTime:(id)a1 forBundleID:(id)a2 dataTypes:(id)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)removeSubscriptionsWithBundleID:(id)a0 dataCode:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)tableAliases;
+ (id)uniquedColumns;
+ (BOOL)setLaunchTimeHysteresis:(id)a0 forBundleID:(id)a1 dataTypes:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)addSubscriptionWithBundleID:(id)a0 dataCode:(long long)a1 updateFrequency:(unsigned long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)allSubscriptionsForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)subscriptionForBundleID:(id)a0 dataCode:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)allSubscriptionsForType:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

@end
