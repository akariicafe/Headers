@class NSURL, NSIndexSet;

@interface PBFPosterExtensionDataStoreMigrator : NSObject

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) BOOL isDataStoreUpToDateForCurrentVersion;
@property (nonatomic) BOOL shouldCleanupAfterMigration;
@property (readonly, nonatomic) NSIndexSet *availableDataStoreVersions;

+ (BOOL)migrateDataStoreAtBaseURL:(id)a0 fromVersion:(unsigned long long)a1 toVersion:(unsigned long long)a2 cleanupAfterMigrationSucceeds:(BOOL)a3 error:(out id *)a4;

- (id)initWithBaseURL:(id)a0;
- (void).cxx_destruct;
- (void)markDataStoreArchivesAsPurgable;
- (unsigned long long)_mostUpToDateValidDataStoreToMigrateFrom;
- (void)_removeAncientDataStores;
- (void)archiveDataStoresBeforeCurrentDataStoreVersion;
- (unsigned long long)migrateDataStoreToCurrentVersion:(out id *)a0;
- (void)removeDataStoresBeforeCurrentDataStoreVersion;
- (BOOL)validateDataStoreIntegrity:(out id *)a0;

@end
