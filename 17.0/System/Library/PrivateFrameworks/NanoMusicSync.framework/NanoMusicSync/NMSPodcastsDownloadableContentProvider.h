@class NSString, NSObject, NSPersistentHistoryToken;
@protocol NMSDownloadableContentProviderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NMSPodcastsDownloadableContentProvider : NSObject <MTDBExtensionAccessObserver, ICEnvironmentMonitorObserver, NMSDownloadableContentProvider> {
    NSObject<OS_dispatch_queue> *_mergeQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_source> *_persistentHistorySource;
    BOOL _delegateNotificationPending;
}

@property (retain, nonatomic) NSPersistentHistoryToken *lastMergedToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NMSDownloadableContentProviderDelegate> delegate;

- (id)init;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void).cxx_destruct;
- (id)_ctx;
- (void)extensionAccessDidChange;
- (void)_notifyDelegateContentDidChange;
- (BOOL)_shouldMergeHistoryTransaction:(id)a0;
- (BOOL)_changeContainsRelevantChannelChanges:(id)a0;
- (BOOL)_changeContainsRelevantEpisodeChanges:(id)a0;
- (BOOL)_changeContainsRelevantShowChanges:(id)a0;
- (BOOL)_changeContainsRelevantStationChanges:(id)a0;
- (void)_handlePersistentStoreRemoteChangeNotification:(id)a0;
- (void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)a0;
- (void)_notifyDelegateContentDidChangeImmediately;
- (void)_processLatestPersistenHistoryChanges;
- (id)_relevantChannelProperties;
- (void)_resetPersistentHistoryTokenAndNotifyObservers;
- (id)createItemEnumerator;

@end
