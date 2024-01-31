@class NSString, MTCoreDataContainer;
@protocol MTCoreDataContainerConfigProvider;

@interface MTDB : NSObject <NSManagedObjectContextProvider>

@property (retain, nonatomic) MTCoreDataContainer *coreDataContainer;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)serpentIdMigrationComplete;
+ (void)setCorrupt:(BOOL)a0;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (id)fetchManagedObjectModelFromDisk;
+ (id)libraryWalPath;
+ (long long)coreDataVersion;
+ (BOOL)needsMigrationToDeltaFeedUpdates;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (id)libraryPath;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (BOOL)canExtensionOpenDatabase;
+ (long long)libraryDataVersion;
+ (void)isPodcastsAppCheck;
+ (BOOL)createDatabaseIfNeeded;
+ (id)libraryShmPath;
+ (void)setLibraryDataVersion:(long long)a0;
+ (BOOL)isCorrupt;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (void)setSharedInstance:(id)a0;

- (id)managedObjectModel;
- (id)init;
- (void).cxx_destruct;
- (id)loggingContext;
- (id)playbackContext;
- (id)contextForName:(id)a0;
- (void)addChangeNotifier:(id)a0;
- (id)carPlayContext;
- (id)importContext;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)persistentStoreUuid;
- (id)privateQueueContext;
- (void)removeChangeNotifier:(id)a0;
- (id)resetableImportContext;
- (id)storeContext;

@end
