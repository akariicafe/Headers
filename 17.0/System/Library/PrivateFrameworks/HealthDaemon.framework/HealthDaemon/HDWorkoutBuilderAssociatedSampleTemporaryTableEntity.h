@interface HDWorkoutBuilderAssociatedSampleTemporaryTableEntity : HDHealthEntity

+ (BOOL)isTemporary;
+ (BOOL)withLocalTableName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)disambiguatedDatabaseTable;

@end
