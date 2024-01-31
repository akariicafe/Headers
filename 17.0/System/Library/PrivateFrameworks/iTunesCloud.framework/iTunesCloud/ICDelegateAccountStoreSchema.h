@interface ICDelegateAccountStoreSchema : NSObject

@property (class, readonly, nonatomic) long long currentVersion;

+ (id)defaultDatabasePath;
+ (BOOL)setupWithConnection:(id)a0 error:(id *)a1;
+ (double)valueForDate:(id)a0;
+ (id)dateForValue:(double)a0;
+ (BOOL)_createDefaultSchemaWithConnection:(id)a0 error:(id *)a1;

@end
