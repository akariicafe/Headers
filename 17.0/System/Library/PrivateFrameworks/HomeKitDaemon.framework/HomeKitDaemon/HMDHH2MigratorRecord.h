@class NSString;

@interface HMDHH2MigratorRecord : HMFObject <HMFLogging>

@property (retain, nonatomic) NSString *hh2MigratorRecordDataStorePath;
@property (nonatomic) BOOL isMigrationInProgress;
@property (nonatomic) unsigned int currentMigrationAttempt;
@property (nonatomic) BOOL shouldSkipKeyRollOperations;
@property (nonatomic) BOOL forceMigrationFailureForTesting;
@property (nonatomic) BOOL migrateFromTestDirectory;
@property (nonatomic) BOOL dryRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)archiveMigratorDict:(id)a0;
+ (id)lastMigrationFailure;
+ (id)prepareDictionary:(id)a0;
+ (id)prepareDictionary:(BOOL)a0 attempt:(unsigned int)a1 skipKeyRoll:(BOOL)a2 forceFailForTesting:(BOOL)a3 migrateFromTestDirectory:(BOOL)a4 dryRun:(BOOL)a5;
+ (BOOL)recordMigrationFailureWithError:(id)a0;
+ (void)removeMigrationFailureRecord;
+ (id)singleRecord;
+ (id)unarchiveMigratorDict:(id)a0;

- (BOOL)writeToDisk;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)finishMigration;
- (BOOL)beginMigration;
- (id)initWithLocalStorePath:(id)a0;
- (BOOL)isMaximumMigrationAttemptReached;
- (void)readMigratorRecord;
- (void)unarchiveRecordFromData:(id)a0;
- (void)updateValuesFromDict:(id)a0;
- (BOOL)writeMigratorRecord:(id)a0;
- (BOOL)writeNewMigrationRecord;

@end
