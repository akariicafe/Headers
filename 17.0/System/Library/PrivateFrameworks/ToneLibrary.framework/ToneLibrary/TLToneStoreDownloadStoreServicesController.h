@class NSString, NSMutableDictionary, NSHashTable, SSDownloadManager, NSObject, SSPurchaseManager;
@protocol OS_dispatch_queue;

@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    NSString *_storeAccountName;
    NSMutableDictionary *_toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
    SSDownloadManager *_storeDownloadManager;
    SSPurchaseManager *_storePurchaseManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *storeAccountName;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (void)purchaseManager:(id)a0 didFinishPurchasesWithResponses:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_assertRunningOnAccessQueue;
- (void)_handleToneManagerContentsDidChangeNotification:(id)a0;
- (void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
- (void)_notifyObserversOfStartedToneStoreDownloads:(id)a0 progressedToneStoreDownload:(id)a1 finishedToneStoreDownloads:(id)a2;
- (void)_notifyObserversOfUpdatedStoreAccountName:(id)a0;
- (void)_openToneStoreWithStoreItemKind:(id)a0;
- (void)_updateStoreAccountName;
- (void)openAlertToneStore;
- (void)openRingtoneStore;
- (void)redownloadAllTones;

@end
