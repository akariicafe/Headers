@interface HDCategorySampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (id)_predicateForCategoryTypesToSync;
+ (id)_predicateForSyncSession:(id)a0;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;

@end
