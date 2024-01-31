@interface _HDCategorySampleEntityEncoder : HDEntityEncoder {
    BOOL _overrideMCCategorySampleValue;
}

+ (long long)estimatedEncodedSize;

- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;
- (id)initWithHealthEntityClass:(Class)a0 profile:(id)a1 transaction:(id)a2 purpose:(long long)a3 encodingOptions:(id)a4 authorizationFilter:(id /* block */)a5;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
