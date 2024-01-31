@interface HDSleepScheduleSyncEntity : HDSampleSyncEntity

+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)supportsSyncStore:(id)a0;
+ (id)syncEntityIdentifier;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (BOOL)supportsDateBasedSharding;

@end
