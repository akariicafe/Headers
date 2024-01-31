@class CKContainer, NSString, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue, SKADatabaseProvidingDelegate;

@interface SKADatabaseProvider : NSObject <SKADatabaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *historyProcessingQueue;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) CKContainer *ckContainer;
@property (weak, nonatomic) id<SKADatabaseProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)newBackgroundContext;
- (id)fileManager;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (id)containerName;
- (id)localDatabaseFileURL;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (BOOL)overrideDeviceEncryptionCheck;
- (id)databaseDirectoryURL;
- (id)lastProcessedPersistentHistoryToken;
- (id)appTransactionAuthorName;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)ckContainerIdentifier;
- (void).cxx_destruct;
- (id)createCkContainer;
- (id)initWithDelegate:(id)a0;
- (id)cloudDatabaseFileURL;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (id)cloudPersistentStoreDescription;
- (id)localPersistentStoreDescription;
- (id)createPersistentContainer;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (BOOL)databaseHasBeenCreated;
- (void)processPersistentStoreRemoteChanges;

@end
