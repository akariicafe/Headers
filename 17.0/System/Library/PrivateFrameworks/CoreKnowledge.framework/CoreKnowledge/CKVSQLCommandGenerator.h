@interface CKVSQLCommandGenerator : NSObject

+ (id)deleteFromTableWithName:(id)a0 criterion:(id)a1 returningColumns:(id)a2;
+ (void)addLimit:(id)a0 offset:(id)a1 forSelect:(id)a2;
+ (id)selectFromTableWithName:(id)a0 columns:(id)a1 count:(BOOL)a2 join:(id)a3 criterion:(id)a4 order:(id)a5 limit:(id)a6 offset:(id)a7;
+ (id)_generateCommaSeparatedValuesString:(id)a0;
+ (id)_generateCommaSeparatedPlaceholdersString:(unsigned long long)a0;
+ (id)_generateJoinClause:(id)a0;
+ (id)updateWithTableName:(id)a0 columnNames:(id)a1 columnValues:(id)a2 criterion:(id)a3 returningColumns:(id)a4;
+ (id)_generateOrderByClause:(id)a0;
+ (id)insertCommandStringWithTableName:(id)a0 columnNames:(id)a1 returningColumns:(id)a2;
+ (id)_produceJoinCriterionClause:(id)a0;
+ (id)_produceCriterionClause:(id)a0 tableName:(id)a1;
+ (id)_produceSelectClauseWithTableName:(id)a0 columnNames:(id)a1 count:(BOOL)a2;
+ (void)replaceOffset:(id)a0 forSelect:(id)a1;
+ (id)_produceSetValuesClauseForColumnNames:(id)a0 columnValues:(id)a1;
+ (id)prefixColumnName:(id)a0 withTableName:(id)a1;

- (id)init;

@end
