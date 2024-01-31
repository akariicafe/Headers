@class NSString, NSURL, PLPhotoLibraryPathManagerCore, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager> {
    PLPhotoLibraryPathManagerCore *_internalPathManager;
    NSString *_singletonPhotoLibraryPath;
    unsigned char _format;
}

@property (readonly) BOOL isUBF;
@property (readonly) BOOL isDCIM;
@property (readonly) unsigned short bundleScope;
@property (readonly, copy) NSURL *libraryURL;
@property (readonly, copy) NSString *baseDirectory;
@property (readonly) PLFileSystemCapabilities *capabilities;
@property (readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)systemLibraryBaseDirectory;
+ (BOOL)isSystemPhotoLibraryURL:(id)a0;
+ (id)systemLibraryURL;
+ (id)wellKnownPhotoLibraryURLForIdentifier:(long long)a0;
+ (unsigned long long)libraryCreateOptionsForWellKnownLibraryIdentifier:(long long)a0;
+ (BOOL)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)managedPathWithUuid:(const char *)a0 base:(const char *)a1 fileMarker:(const char *)a2 extension:(const char *)a3;
+ (BOOL)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)setSystemLibraryURL:(id)a0 options:(unsigned short)a1 error:(id *)a2;
+ (long long)wellKnownPhotoLibraryIdentifierForURL:(id)a0;
+ (id)allPhotosPathsOnThisDevice;
+ (BOOL)isMultiLibraryModeEnabled;
+ (void)assertSingleLibraryMode;
+ (void)enableMultiLibraryMode;
+ (id)systemLibraryPathManager;
+ (BOOL)bundleScopeShouldBePersistedForRebuild:(unsigned short)a0;
+ (void)throwMultiLibraryAPIMisuse;
+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)a0;

- (id)init;
- (id)redactedDescription;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1;
- (void).cxx_destruct;
- (id)initWithLibraryURL:(id)a0;
- (id)initWithBaseDirectory:(id)a0;
- (id)rebuildHistoryFilePath;
- (id)sqliteErrorIndicatorFilePath;
- (unsigned char)_bundleFormatFromLibraryURL:(id)a0 libraryFormat:(unsigned char)a1;
- (BOOL)createTimeMachineExclusionPathsWithError:(id *)a0;
- (id)initWithLibraryURL:(id)a0 bundleScope:(unsigned short)a1 libraryFormat:(unsigned char)a2;
- (void)setBackupExclusionAttributesForWellKnownLibrariesOrWithCreateOptions:(unsigned long long)a0;
- (void)setOrCompareLibraryURL:(id)a0;
- (id)timeMachineExclusionPathForPathType:(unsigned char)a0;

@end
