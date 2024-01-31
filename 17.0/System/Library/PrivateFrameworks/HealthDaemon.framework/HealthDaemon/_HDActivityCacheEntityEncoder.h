@class NSSet;

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder {
    NSSet *_activityStatisticsQuantityInfoClasses;
}

- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;
- (void).cxx_destruct;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
