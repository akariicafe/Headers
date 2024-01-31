@interface _HDLocationSeriesSampleEntityEncoder : HDEntityEncoder

- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)objectForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (BOOL)generateCodableRepresentationsForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 maxBytesPerRepresentation:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
