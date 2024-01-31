@class FedStatsSQLiteDatabase;

@interface FedStatsSQLiteCategoryDatabase : NSObject

@property (readonly) FedStatsSQLiteDatabase *sqliteDB;
@property (readonly) unsigned long long dimensionality;

+ (id)categoryDatabaseAt:(id)a0 withCategories:(id)a1 error:(id *)a2;
+ (id)databaseWithFileURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)decode:(unsigned long long)a0 error:(id *)a1;
- (id)encode:(id)a0 error:(id *)a1;
- (id)initWithSQLiteDatabase:(id)a0 dimensionality:(unsigned long long)a1;

@end
