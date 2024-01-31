@interface CKDThrottleTableGroup : CKSQLiteTableGroup

+ (id)groupName;
+ (BOOL)rebootShouldClearData;

- (id)createTables:(id *)a0;

@end
