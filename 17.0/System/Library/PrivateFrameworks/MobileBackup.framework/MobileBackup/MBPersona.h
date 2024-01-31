@class NSString, NSSet, _MBUser;

@interface MBPersona : NSObject {
    _MBUser *_user;
}

@property (readonly, nonatomic) BOOL shouldRestoreFilesSparse;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) NSString *volumeMountPoint;
@property (nonatomic) unsigned long long userPersonaType;
@property (nonatomic) BOOL isDataSeparatedPersona;
@property (retain, nonatomic) NSSet *volumesToBackUp;
@property (readonly, nonatomic) long long accountType;
@property (readonly, nonatomic) _MBUser *user;
@property (readonly, nonatomic) BOOL isPersonalPersona;
@property (readonly, nonatomic) BOOL isEnterprisePersona;
@property (readonly, nonatomic) BOOL shouldRestoreToSharedVolume;
@property (readonly, nonatomic) NSString *cacheDirectory;
@property (readonly, nonatomic) NSString *preferencesDirectory;
@property (readonly, nonatomic) NSString *sqliteCopyDirectory;
@property (readonly, nonatomic) NSString *appPlaceholderArchiveDirectory;
@property (readonly, nonatomic) NSString *demotedAppsPlistPath;
@property (readonly, nonatomic) NSString *skippedFileRecordsPlistPath;
@property (readonly, nonatomic) NSString *safeHarborDirectory;
@property (readonly, nonatomic) NSString *userRestoreDirectory;
@property (readonly, nonatomic) NSString *sharedRestoreDirectory;
@property (readonly, nonatomic) NSString *userIncompleteRestoreDirectory;
@property (readonly, nonatomic) NSString *sharedIncompleteRestoreDirectory;
@property (readonly, nonatomic) NSString *placeholderRestoreDirectory;
@property (readonly, nonatomic) NSString *restoreOperationLogPath;
@property (readonly, nonatomic) NSString *restoreKeyBagsPath;
@property (readonly, nonatomic) NSString *systemDataContainerRestoreDirectory;
@property (readonly, nonatomic) NSString *systemSharedDataContainerRestoreDirectory;
@property (readonly, nonatomic) NSString *systemContainersVolumeMountPoint;

+ (void)installPersonaForTesting;
+ (Class)personaClass;
+ (id)personaWithAttributes:(id)a0 volumeMountPoint:(id)a1;
+ (id)personaWithIdentifier:(id)a0 userPersonaType:(unsigned long long)a1 dataSeparatedPersona:(BOOL)a2 volumeMountPoint:(id)a3;
+ (id)personaWithUMPersona:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_fileSystemSupportsSparseFiles:(id)a0;
- (BOOL)_moveRestoreDirectoryFrom:(id)a0 toFinalLocation:(id)a1 error:(id *)a2;
- (unsigned long long)_removeRestorePrefetchCacheAtPath:(id)a0 earliestDate:(id)a1;
- (id)_userRestorePrefetchDirectory;
- (BOOL)cleanupRestoreDirectoriesWithError:(id *)a0;
- (BOOL)createRestoreDirectoriesWithError:(id *)a0;
- (BOOL)finalizeRestoreDirectoriesWithError:(id *)a0;
- (id)initWithPersonaAttributes:(id)a0 volumeMountPoint:(id)a1;
- (id)initWithPersonaIdentifier:(id)a0 userPersonaType:(unsigned long long)a1 dataSeparatedPersona:(BOOL)a2 volumeMountPoint:(id)a3;
- (id)initWithUMPersona:(id)a0 error:(id *)a1;
- (void)removeRestoreKeybags;
- (unsigned long long)removeRestorePrefetchCachesOlderThanDate:(id)a0;
- (id)restorePrefetchDirectories;
- (id)restorePrefetchDirectoryForDomain:(id)a0;

@end
