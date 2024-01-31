@interface HDDataSyncUtilities : NSObject

+ (Class)deletedSampleEntityClass;
+ (Class)deletedSampleSyncEntityClass;
+ (id)generateCodableObjectCollectionsForEntityClass:(Class)a0 predicate:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)insertDeletedObjectsFromCodableObjectCollection:(id)a0 syncEntityClass:(Class)a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)insertObjectsFromCodableObjectCollection:(id)a0 syncEntityClass:(Class)a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (Class)medicationDoseEventSyncEntityClass;
+ (id)provenanceFromCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;

@end
