@interface _HDMedicationUserDomainConceptEntityEncoder : HDEntityEncoder

- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
