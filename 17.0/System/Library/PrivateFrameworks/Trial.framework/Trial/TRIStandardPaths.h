@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
}

+ (id)schemaVersionFile;
+ (id)sharedSystemPaths;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (unsigned int)legacySchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (unsigned int)currentSchemaVersion;

- (BOOL)validateWithError:(id *)a0;
- (id)container;
- (id)init;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)systemDataFile;
- (id)assetStore;
- (id)localTempDir;
- (id)databaseDir;
- (id)trialVolume;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)a0;
- (id)logDir;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)treatmentsDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)namespaceDescriptorsRolloutDir;
- (id)treatmentsDirUsingGlobal:(BOOL)a0;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)deviceIdentifierFile;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)_pathErrorWithDescription:(id)a0;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsExperimentDir;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)subjectDataFile;
- (id)volumeForDirectory:(id)a0;
- (id)_trialSystemRootDir;
- (id)trialRootDirWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCurrentSchemaVersion;
- (id)_versionSpecificStorageDir;
- (id)trialRootDir;
- (id)experimentsDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)containerDir;
- (id)namespaceDescriptorsDir;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsBMLTDir;
- (id)_realHomeDirectory;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)_versionSpecificSystemStorageDir;

@end
