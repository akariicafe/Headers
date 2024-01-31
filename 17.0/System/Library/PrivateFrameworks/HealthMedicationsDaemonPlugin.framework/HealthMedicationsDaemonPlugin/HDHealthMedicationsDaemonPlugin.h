@class NSString;

@interface HDHealthMedicationsDaemonPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDNotificationInstructionCriteriaProvider, HDTaskServerClassProvider, HDUserDomainConceptEntityProvider, HDSyncEntityProvider, HDOntologySchemaImporterProvider, HDOntologyFeatureEvaluatorProvider, HDDemoDataGeneratorProvider, HDCloudSyncStateEntityProvider>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;

- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)extensionForProfile:(id)a0;
- (id)taskServerClasses;
- (id)extensionForHealthDaemon:(id)a0;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)orderedSyncEntities;
- (id)stateSyncEntityClasses;
- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (id)notificationInstructionCriteriaClasses;
- (id)demoDataGeneratorClasses;
- (id)ontologyFeatureEvaluatorsForDaemon:(id)a0;
- (id)ontologySchemaImporterClasses;
- (id)userDomainConceptEntityClasses;
- (id)createMedicationsDaemonExtensionForHealthDaemon:(id)a0;
- (id)createMedicationsProfileExtensionForProfile:(id)a0;

@end
