@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject {
    NSString *_sql;
}

@property (readonly, nonatomic) HDSQLiteDatabase *database;

- (void)finish;
- (id)description;
- (BOOL)performStatementWithError:(id *)a0 bindingHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)enumerateStatementWithError:(id *)a0 bindingHandler:(id /* block */)a1 block:(id /* block */)a2;
- (id)initWithSQL:(id)a0 database:(id)a1;

@end
