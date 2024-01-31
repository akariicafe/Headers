@interface IMDSqlSelectQuery : IMDSqlQuery

+ (id)selectQueryForTable:(id)a0;
+ (id)selectQueryForTable:(id)a0 withColumns:(id)a1;
+ (id)selectQueryForTable:(id)a0 withColumns:(id)a1 where:(id)a2;

- (id)initWithTableName:(id)a0;
- (id)createQueryString;

@end
