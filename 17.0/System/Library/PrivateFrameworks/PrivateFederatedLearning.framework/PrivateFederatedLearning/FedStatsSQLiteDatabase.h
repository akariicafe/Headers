@interface FedStatsSQLiteDatabase : NSObject

@property (readonly) struct sqlite3 { } *database;

+ (id)databaseWithURL:(id)a0 mode:(char)a1 error:(id *)a2;

- (id)initWithDatabase:(struct sqlite3 { } *)a0;
- (void)dealloc;
- (BOOL)execute:(id)a0 error:(id *)a1;
- (id)runQuery:(id)a0 error:(id *)a1;

@end
