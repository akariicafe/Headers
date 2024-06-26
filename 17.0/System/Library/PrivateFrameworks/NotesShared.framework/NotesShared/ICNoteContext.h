@class NSArray, NSData, NSObject, NSDictionary, ICManagedObjectContextUpdater, ICAccount, NSManagedObjectContext, NSString, NSTimer, ICNote, ICAccountUtilities, ICNotesCrossProcessChangeCoordinator, ICFolderCustomNoteSortType, NSError, ICPersistentContainer;
@protocol OS_dispatch_queue;

@interface ICNoteContext : NSObject <ICNoteContainer>

@property (class, readonly, nonatomic) ICNoteContext *sharedContext;

@property (nonatomic) unsigned long long contextOptions;
@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) ICNotesCrossProcessChangeCoordinator *crossProcessChangeCoordinator;
@property (retain, nonatomic) ICManagedObjectContextUpdater *contextUpdater;
@property (getter=isSaving) BOOL saving;
@property (retain, nonatomic) ICAccountUtilities *accountUtilities;
@property (retain, nonatomic) NSTimer *trashDeletionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (nonatomic) BOOL shouldEnsureLocalAccount;
@property (retain, nonatomic) NSDictionary *persistentStoresByAccountId;
@property (nonatomic) unsigned long long countOfPerformBackgroundTask;
@property (nonatomic) BOOL delaySaving;
@property (readonly, nonatomic) BOOL isSharedContext;
@property (readonly) ICPersistentContainer *persistentContainer;
@property (retain, nonatomic) ICNote *currentNote;
@property (retain, nonatomic) NSError *databaseOpenError;
@property (nonatomic) BOOL databaseOpenFailedDueToLowDiskSpace;
@property (retain, nonatomic) NSTimer *updateAttachmentLocationsTimer;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly, nonatomic) BOOL isModernCustomFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, nonatomic) int dateHeadersType;
@property (readonly, nonatomic) BOOL isShowingDateHeaders;
@property (readonly, nonatomic) unsigned long long visibleNotesCount;
@property (readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property (readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (copy, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)legacyNotesDisabled;
+ (void)resetAppContainer;
+ (void)resetAppState;
+ (void)useContainerNamed:(id)a0;
+ (void)crashThisApp;
+ (void)startSharedContextWithOptions:(unsigned long long)a0;
+ (void)enableLocalAccount;
+ (BOOL)hasSharedContext;
+ (id)performBackgroundTaskSerialQueue;
+ (id)workerManagedObjectContextForContainer:(id)a0;
+ (id)filenameFromFileWrapper:(id)a0;
+ (void)clearSharedContext;
+ (void)markOldTrashedNotesForDeletionInContext:(id)a0;
+ (void)setLegacyNotesDisabled:(BOOL)a0;
+ (BOOL)isActive;
+ (id)initializeSearchIndexerDataSourceWithPersistentContainer:(id)a0;
+ (BOOL)hasContextOptions:(unsigned long long)a0;
+ (id)snapshotManagedObjectContextForContainer:(id)a0;
+ (BOOL)updateSharedStateFile:(id)a0 toState:(BOOL)a1 error:(id *)a2;

- (BOOL)save:(id *)a0;
- (id)allICloudACAccounts;
- (id)objectID;
- (void)dealloc;
- (id)persistentStoreForAccountID:(id)a0;
- (id)inMemoryPersistentStoreFromPersistentStores:(id)a0;
- (void)setupTrashDeletionTimer;
- (BOOL)noteIsVisible:(id)a0;
- (id)workerManagedObjectContext;
- (id)persistentContainerQueue;
- (id)defaultPersistentStoreFromPersistentStores:(id)a0;
- (void)refreshPersistentStoresByAccountIdFromPersistentStores:(id)a0;
- (id)persistentStoreCoordinator;
- (void)setupCrossProcessChangeCoordinator;
- (void)saveSubFolderMergeableDataIfNeeded;
- (void)accountsDidChange:(id)a0;
- (void)updateAccounts;
- (void)destroyPersistentStore;
- (BOOL)mergeWithSubFolderMergeableData:(id)a0;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)a0 persistentContainer:(id)a1;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)a0;
- (id)storeFilenameForAccountIdentifier:(id)a0;
- (void)addOrDeleteLocalAccountIfNecessary;
- (void)deleteEverything;
- (void)reloadPersistentContainer;
- (id)customNoteSortTypeValue;
- (id)newFetchedResultsControllerForAllAccounts;
- (void)startIndexingWithCoreSpotlightDelegateForDescription:(id)a0 coordinator:(id)a1;
- (id)snapshotManagedObjectContext;
- (id)predicateForSearchableAttachments;
- (void)updateSubFolderMergeableDataChangeCount;
- (void)managedObjectContextUpdaterDidChangeObjectWithID:(id)a0;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (void)purgeDeletedObjectsInManagedObjectContext:(id)a0;
- (BOOL)save;
- (BOOL)hasAnyContextOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)performSnapshotBackgroundTask:(id /* block */)a0;
- (void)refreshAll;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)purgeEverything;
- (void)managedObjectContextUpdaterDidMerge:(id)a0;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (void)cleanupAdditionalPersistentStores;
- (id)initWithOptions:(unsigned long long)a0;
- (void)managedObjectContextDidSave:(id)a0;
- (BOOL)saveImmediately;
- (void)applicationWillTerminate;
- (id)primaryICloudACAccount;
- (void)applyDateHeadersType:(int)a0;
- (id)predicateForVisibleNotes;
- (id)predicateForPinnedNotes;
- (id)fetchedResultsControllerForFetchRequest:(id)a0 sectionNameKeyPath:(id)a1;
- (BOOL)recoverFromSaveError;
- (BOOL)hasContextOptions:(unsigned long long)a0;
- (void)clearPersistentContainer;
- (void)loadAdditionalPersistentStores;
- (id)predicateForSearchableNotes;
- (void)performBackgroundTask:(id /* block */)a0;
- (void)startSearchIndexerChangeObservingIfNecessary;

@end
