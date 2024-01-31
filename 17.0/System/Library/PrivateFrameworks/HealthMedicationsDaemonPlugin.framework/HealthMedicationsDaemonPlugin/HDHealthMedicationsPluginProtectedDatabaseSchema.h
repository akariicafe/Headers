@class NSArray, NSString;

@interface HDHealthMedicationsPluginProtectedDatabaseSchema : NSObject <HDHealthMedicationsPluginDatabaseSchema>

@property (readonly, nonatomic) long long currentSchemaVersion;
@property (readonly, copy, nonatomic) NSArray *databaseEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_addUniqueConstraintToScheduleMedicationIdentifier:(id)a0 error:(id *)a1;
- (long long)_moveLifestyleFactorsFromUserDefaultsToKeyValueDomain:(id)a0 error:(id *)a1;
- (long long)_sydney_createMedicationDismissedInteractionsTableWithTransaction:(id)a0 error:(id *)a1;
- (void)registerMigrationStepsWithMigrator:(id)a0 schemaName:(id)a1;
- (long long)_sydney_addSyncIdentityToMedicationScheduleEntityWithTransaction:(id)a0 error:(id *)a1;
- (long long)_sydney_dropMedicationIngredientsTableWithTransaction:(id)a0 error:(id *)a1;
- (long long)_addCompatibilityVersionColumnsWithTransaction:(id)a0 error:(id *)a1;
- (id)_getLegacySyncIdentityWithTransaction:(id)a0 errorOut:(id *)a1;
- (long long)_sydney_dropAndReAddMedicationScheduleTableWithTransaction:(id)a0 error:(id *)a1;

@end
