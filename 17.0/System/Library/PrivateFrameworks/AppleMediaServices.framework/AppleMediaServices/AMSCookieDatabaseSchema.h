@interface AMSCookieDatabaseSchema : NSObject

+ (void)migrateVersion0to1WithMigration:(id)a0;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;
+ (BOOL)promptTapToRadarForSchemaMigrationFailureWithDescription:(id)a0 error:(id *)a1;

@end
