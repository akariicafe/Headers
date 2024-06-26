@class NSString, NSSet, NSDictionary, NSFileHandle;

@interface MBDomain : NSObject {
    NSFileHandle *_fileHandle;
    NSString *_fileHandlePath;
    NSFileHandle *_fileHandleForSnapshot;
    NSString *_fileHandlePathForSnapshot;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *volumeMountPoint;
@property (readonly, nonatomic) unsigned long long volumeType;
@property (readonly, nonatomic) NSString *rootPath;
@property (readonly, copy, nonatomic) NSString *rootPathRelativeToVolumeMountPoint;
@property (readonly, nonatomic) NSString *containerID;
@property (readonly, nonatomic) int containerType;
@property (readonly, nonatomic) NSSet *relativePathsToBackup;
@property (retain, nonatomic) NSSet *relativePathsToBackupAndRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToBackup;
@property (retain, nonatomic) NSSet *relativePathsNotToBackupToDrive;
@property (retain, nonatomic) NSSet *relativePathsNotToBackupToService;
@property (retain, nonatomic) NSSet *relativePathsNotToBackupInMegaBackup;
@property (retain, nonatomic) NSSet *relativePathsToOnlyBackupEncrypted;
@property (retain, nonatomic) NSSet *relativePathsNotToCheckIfModifiedDuringBackup;
@property (readonly, nonatomic) NSSet *relativePathsToRestore;
@property (retain, nonatomic) NSSet *relativePathsToRestoreOnly;
@property (retain, nonatomic) NSSet *relativePathsToRestoreOnlyFromService;
@property (retain, nonatomic) NSSet *relativePathsToRemoveOnRestore;
@property (retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRestore;
@property (retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToMigrate;
@property (retain, nonatomic) NSSet *relativePathsNotToRestoreToIPods;
@property (retain, nonatomic) NSSet *relativePathsNotToBackupAndRestoreToAppleTVs;
@property (retain, nonatomic) NSSet *relativePathsToBackgroundRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToRemoveIfNotRestored;
@property (retain, nonatomic) NSSet *relativePathsToIgnoreExclusionsForDrive;
@property (retain, nonatomic) NSSet *relativePathsToBackupToDriveAndStandardAccount;
@property (retain, nonatomic) NSSet *relativePathsToBackupIgnoringProtectionClass;
@property (retain, nonatomic) NSDictionary *relativePathAggregateDictionaryGroups;
@property (retain, nonatomic) NSDictionary *relativePathDomainRedirects;
@property (nonatomic) BOOL shouldDigest;
@property (nonatomic) BOOL hasExternalConfig;
@property (nonatomic) BOOL isExternalConfig;
@property (nonatomic) BOOL shouldRestoreRelativeSymlinks;
@property (readonly, nonatomic) BOOL supportsFSEventsForDetectingChanges;
@property (readonly, nonatomic) BOOL shouldRestoreToSharedVolume;
@property (readonly, nonatomic, getter=isAppDomain) BOOL appDomain;
@property (readonly, nonatomic, getter=isPlaceholderAppDomain) BOOL placeholderAppDomain;
@property (readonly, nonatomic, getter=isPluginAppDomain) BOOL pluginAppDomain;
@property (readonly, nonatomic, getter=isGroupAppDomain) BOOL groupAppDomain;
@property (readonly, nonatomic, getter=isUninstalledAppDomain) BOOL installedAppDomain;
@property (readonly, nonatomic, getter=isSystemContainerDomain) BOOL systemContainerDomain;
@property (readonly, nonatomic, getter=isSystemSharedContainerDomain) BOOL systemSharedContainerDomain;
@property (readonly, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;
@property (readonly, nonatomic) BOOL hasRootPath;

+ (BOOL)isAppGroupName:(id)a0;
+ (BOOL)_boolFromValue:(id)a0 forKey:(id)a1;
+ (id)_dictionaryOfStringsToStringFromValue:(id)a0 forKey:(id)a1;
+ (id)_relativePathsByAddingSQLiteJournals:(id)a0;
+ (id)_setOfStringsFromValue:(id)a0 forKey:(id)a1;
+ (BOOL)_shouldRestoreRelativeSymlinksForDomainName:(id)a0;
+ (id)_stringByRemovingCommentsFromValue:(id)a0 forKey:(id)a1;
+ (id)appDomainWithIdentifier:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;
+ (id)appGroupDomainWithIdentifier:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;
+ (id)appPlaceholderDomainWithIdentifier:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;
+ (id)appPluginDomainWithIdentifier:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;
+ (id)containerIDWithName:(id)a0;
+ (int)containerTypeWithName:(id)a0;
+ (id)domainWithName:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;
+ (double)doubleFromStringValueForKey:(id)a0 plist:(id)a1;
+ (BOOL)isAppPlaceholderName:(id)a0;
+ (BOOL)isAppPluginName:(id)a0;
+ (BOOL)isContainerName:(id)a0;
+ (BOOL)isSystemContainerName:(id)a0;
+ (BOOL)isSystemSharedContainerName:(id)a0;
+ (id)nameWithAppID:(id)a0;
+ (id)placeholderNameWithAppID:(id)a0;
+ (id)systemContainerDomainWithIdentifier:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;
+ (id)systemSharedContainerDomainWithIdentifier:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;

- (unsigned long long)hash;
- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (int)_cachedFileDescriptorWithError:(id *)a0;
- (int)_cachedFileDescriptorWithSnapshotPath:(id)a0 error:(id *)a1;
- (id)_initWithName:(id)a0 volumeMountPoint:(id)a1 rootPath:(id)a2;
- (BOOL)_loadDomainFromExternalPlist:(id)a0;
- (BOOL)_loadSystemDomain:(id)a0 plist:(id)a1 volumeMountPoint:(id)a2;
- (int)cachedFileDescriptorWithSnapshotPath:(id)a0 error:(id *)a1;
- (id)initForTestingWithName:(id)a0 plist:(id)a1;
- (id)initNonContainerizedDomainWithName:(id)a0 plist:(id)a1 accountType:(long long)a2 userVolumeMountPoint:(id)a3;
- (BOOL)isEqualToDomain:(id)a0;
- (void)releaseCachedFileDescriptors;
- (BOOL)shouldBackUpAnyChildOfRelativePath:(id)a0;

@end
