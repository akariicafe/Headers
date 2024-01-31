@interface CKDPCSSQLCacheTableGroup : CKSQLiteTableGroup

+ (id)groupIdentifierForContainerID:(id)a0 accountOverrideInfo:(id)a1;
+ (id)cacheTableGroupInDatabase:(id)a0 containerID:(id)a1 accountOverrideInfo:(id)a2;
+ (BOOL)rebootShouldClearData;

- (id)cacheTable;
- (id)createTables:(id *)a0;

@end
