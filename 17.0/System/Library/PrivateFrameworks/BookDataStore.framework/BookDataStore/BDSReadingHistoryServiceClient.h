@class NSHashTable;
@protocol BDSServiceProtocol;

@interface BDSReadingHistoryServiceClient : NSObject <BDSBookWidgetReadingHistoryProviding, BDSReadingHistoryBackupServiceClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
}

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;
@property (retain, nonatomic) NSHashTable *observers;

+ (void)clearDefaultsCachedDataWithCompletionHandler:(id /* block */)a0;
+ (id)sharedServiceProxy;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)allObservers;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)clearDataWithCompletionHandler:(id /* block */)a0;
- (void)_handleModelDidChange:(id)a0;
- (void)backupWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)bookWidgetReadingHistoryStateInfoWithCompletionHandler:(id /* block */)a0;
- (void)clearDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearDefaultsCachedDataWithCompletionHandler:(id /* block */)a0;
- (void)clearTodayWithCompletionHandler:(id /* block */)a0;
- (void)handleSyncFileChangeWithSyncVersionInfo:(id)a0 updateInfo:(id)a1 completion:(id /* block */)a2;
- (void)incrementWithDate:(id)a0 by:(long long)a1 completionHandler:(id /* block */)a2;
- (void)listBackupWithCompletionHandler:(id /* block */)a0;
- (void)readingHistoryStateInfoWithRangeStart:(id)a0 rangeEnd:(id)a1 currentTime:(id)a2 completionHandler:(id /* block */)a3;
- (void)restoreWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)serviceStatusInfoWithCompletionHandler:(id /* block */)a0;

@end
