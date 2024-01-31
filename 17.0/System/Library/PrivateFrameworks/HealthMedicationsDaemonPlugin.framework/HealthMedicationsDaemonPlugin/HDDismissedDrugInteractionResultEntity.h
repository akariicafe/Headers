@interface HDDismissedDrugInteractionResultEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)enumerateDismissedDrugInteractionResultsWithWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)insertDismissedDrugInteractionResult:(id)a0 profile:(id)a1 error:(id *)a2;

@end
