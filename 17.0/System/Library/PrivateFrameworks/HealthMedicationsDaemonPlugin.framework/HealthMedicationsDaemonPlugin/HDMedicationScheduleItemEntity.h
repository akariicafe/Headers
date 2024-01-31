@interface HDMedicationScheduleItemEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)deleteMedicationScheduleItemsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateItemsWithPredicate:(id)a0 orderingTerms:(id)a1 transaction:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)insertMedicationScheduleItem:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)medicationScheduleItemWithIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)updateNotification:(BOOL)a0 itemIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
