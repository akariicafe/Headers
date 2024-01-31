@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (void)addPrimaryMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (id)init;
- (id)cinarProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)future_addProtectedMigrationSteps;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (void)dawn_addProtectedMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)tigrisUnprotectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (void)peace_addUnprotectedMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (void)invalidate;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (id)emetUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (id)monarchProtectedMigrationSteps;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (id)erieUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (void).cxx_destruct;
- (id)whitetailProtectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)sydney_addProtectedMigrationSteps;
- (id)boulderProtectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)dawn_addUnprotectedMigrationSteps;
- (id)initWithTransaction:(id)a0;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (id)corryProtectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;

@end
