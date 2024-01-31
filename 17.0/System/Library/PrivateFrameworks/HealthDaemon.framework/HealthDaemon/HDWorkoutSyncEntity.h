@interface HDWorkoutSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_predicateForSampleAgeInSyncSession:(id)a0 sampleTypeClass:(Class)a1;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;

@end
