@interface TPSDataMigrator : NSObject

+ (void)performMigrationIfNeeded;
+ (void)_performDesiredOutcomeMigration;
+ (void)revertTipStatusArchivalIfNeeded;
+ (void)_performSavedTipsMigration;

@end
