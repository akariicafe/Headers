@interface EFSQLQueryGenerator : NSObject

+ (id)_createStatementForPredicate:(id)a0 propertyMapper:(id)a1 tablesUsed:(id)a2;
+ (id)countStatementForPredicate:(id)a0 propertyMapper:(id)a1 distinctBy:(id)a2;
+ (id)selectStatementForReturnObjectKeypaths:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 propertyMapper:(id)a4 protectedDataAvailable:(BOOL)a5;
+ (id)selectStatementForReturnObjectKeypaths:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 propertyMapper:(id)a3 protectedDataAvailable:(BOOL)a4;

@end
