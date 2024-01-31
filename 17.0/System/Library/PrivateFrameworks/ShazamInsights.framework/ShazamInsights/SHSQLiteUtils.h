@interface SHSQLiteUtils : NSObject

+ (BOOL)runSQL:(id)a0 onDatabase:(struct sqlite3 { } *)a1 replacingTokens:(id)a2 withObjects:(id)a3 rowHandler:(id /* block */)a4 error:(id *)a5;
+ (BOOL)closeDatabase:(struct sqlite3 { } *)a0 error:(id *)a1;
+ (void)commitTransactionOnDatabase:(struct sqlite3 { } *)a0;
+ (BOOL)createDatabase:(struct sqlite3 **)a0 atURL:(id)a1 error:(id *)a2;
+ (BOOL)database:(struct sqlite3 { } *)a0 hasPopulatedTable:(id)a1 error:(id *)a2;
+ (BOOL)defenseAgainstBadDatabase:(struct sqlite3 { } *)a0;
+ (BOOL)openDatabase:(struct sqlite3 **)a0 atURL:(id)a1 error:(id *)a2;
+ (id)queryStringForCount:(unsigned long long)a0;
+ (BOOL)runNoResultSQL:(id)a0 onDatabase:(struct sqlite3 { } *)a1 error:(id *)a2;
+ (void)startTransactionOnDatabase:(struct sqlite3 { } *)a0;

@end
