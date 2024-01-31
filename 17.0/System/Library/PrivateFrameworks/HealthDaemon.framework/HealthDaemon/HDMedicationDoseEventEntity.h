@interface HDMedicationDoseEventEntity : HDSampleEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)syntheticQuantityColumnName;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (long long)shouldInsertObject:(id)a0 sourceID:(id)a1 profile:(id)a2 transaction:(id)a3 objectToReplace:(id *)a4 objectID:(id *)a5 error:(id *)a6;
+ (id)indicesWithBehavior:(id)a0;
+ (BOOL)isConcreteEntity;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;

@end
