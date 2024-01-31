@class CKDRecordCacheTable;

@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable *_rc;
}

+ (id)recordCacheInDatabase:(id)a0 withContainer:(id)a1;
+ (id)recordCacheWithPath:(id)a0 forContainer:(id)a1;
+ (id)recordCacheForContainer:(id)a0;
+ (unsigned long long)ttlDays;

- (id)createTables:(id *)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
