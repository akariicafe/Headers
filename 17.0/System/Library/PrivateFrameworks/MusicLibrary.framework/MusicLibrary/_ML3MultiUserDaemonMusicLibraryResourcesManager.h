@class NSString, NSOperationQueue, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, MLMediaLibraryAccountChangeObserver, _MSVAccountInformationProviding;

@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (retain, nonatomic) id<_MSVAccountInformationProviding> accountInfo;
@property (weak, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (copy, nonatomic) NSString *currentActiveAccountDSID;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)libraryContainerPath;
- (void)dealloc;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (void)_processAccountChangeNotification;
- (id)musicAssetsContainerPath;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)a0 newDatabasePath:(id)a1;
- (id)_libraryContainerPathForDSID:(id)a0;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)_notifyClients:(id)a0;
- (void).cxx_destruct;
- (id)databasePathForDSID:(id)a0;
- (BOOL)shouldExecuteAccountChangeOperation:(id)a0 reason:(id *)a1;
- (id)_blockingCurrentActiveAccountDSID;
- (id)initWithAccountInfo:(id)a0 accountChangeObserver:(id)a1;

@end
