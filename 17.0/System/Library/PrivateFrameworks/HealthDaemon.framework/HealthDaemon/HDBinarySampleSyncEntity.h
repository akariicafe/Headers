@interface HDBinarySampleSyncEntity : HDSampleSyncEntity

+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (id)syncEntityIdentifier;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_objectWithCodable:(id)a0 collection:(id)a1;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;

@end
