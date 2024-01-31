@interface HDMedicationScheduleEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)privateSubEntities;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)availableSchedulePredicate;
+ (BOOL)enumerateSchedulesWithPredicate:(id)a0 limit:(unsigned long long)a1 orderingTerms:(id)a2 transaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)insertMedicationSchedule:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)updateMedicationSchedulesToBeDeletedWithMedicationUUID:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
