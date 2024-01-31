@class NSArray, HDSQLiteDatabase, _HKBehavior;
@protocol HDDatabaseMigrationTransactionDelegate;

@interface HDDatabaseMigrationTransaction : NSObject

@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, copy, nonatomic) NSArray *schemaProviders;
@property (weak, nonatomic) id<HDDatabaseMigrationTransactionDelegate> delegate;
@property (readonly, nonatomic) HDSQLiteDatabase *defaultDatabase;
@property (readonly, nonatomic) long long defaultProtectionClass;
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (readonly, nonatomic) BOOL isProtectedMigration;

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)a0;

- (long long)accessHistoricHFDWithError:(id *)a0 block:(id /* block */)a1;
- (void)setHFDRebuildState:(long long)a0;
- (id)initWithUnprotectedDatabase:(id)a0 protectedDatabase:(id)a1 schemaProviders:(id)a2 behavior:(id)a3;
- (void).cxx_destruct;
- (long long)migrateOrCreateSchemaWithError:(id *)a0;
- (long long)HFDRebuildState;

@end
