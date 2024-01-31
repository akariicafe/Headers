@class NSString, NSArray, LSInstallProgressList, NSMutableDictionary, NSMutableSet, NSObject, NSMutableOrderedSet, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate> {
    NSMutableSet *_observers;
    LSInstallProgressList *_progresses;
    NSMutableSet *_publishingStrings;
    NSMutableDictionary *_installIndexes;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableSet *_inactiveInstalls;
    NSMutableDictionary *_installTypes;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSArray *_journalledNotificationsToReplay;
    NSMutableArray *_startupJournalledNotifications;
    BOOL _replayingJournalToNewClients;
    NSObject<OS_dispatch_source> *_progressProportionsSaveTimerSource;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _progressProportionsLock;
    NSMutableDictionary *_progressProportions;
    BOOL _usingNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (int)notificationTypeForOperation:(unsigned long long)a0;
+ (void)beginListening;

- (SEL)observerSelectorForNotification:(int)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (id)loadJournalledNotificationsFromDisk;
- (void)sendNetworkUsageChangedNotification;
- (void)_placeholdersUninstalled:(id)a0;
- (void)dispatchJournalledNotificationsToObserver:(id)a0;
- (void)saveProportions;
- (void)addSendNotificationFenceWithTimeout:(double)a0 fenceBlock:(id /* block */)a1;
- (unsigned long long)finalInstallPhaseForAppProxy:(id)a0;
- (void)performJournalRecovery;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)restoreInactiveInstalls;
- (void)getMaxProgressPhaseUnitsForLoading:(int *)a0 restoring:(int *)a1 installing:(int *)a2 essentialAssets:(int *)a3 forAppProxy:(id)a4;
- (id)_LSFindPlaceholderApplications;
- (void)dispatchJournalledNotificationsToConnectedClients;
- (id)progressProportionsForBundleID:(id)a0;
- (void)directlySendNotification:(int)a0 withProxies:(id)a1 toObserverProxy:(id)a2;
- (void)createInstallProgressForApplication:(id)a0 withPhase:(unsigned long long)a1 andPublishingString:(id)a2 reply:(id /* block */)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)parentProgressForApplication:(id)a0 andPhase:(unsigned long long)a1 isActive:(BOOL)a2;
- (void)sendDatabaseRebuiltNotificationToObserver:(id)a0;
- (void)coalesceProportionsSave;
- (id)_prepareApplicationProxiesForNotification:(int)a0 identifiers:(id)a1 withPlugins:(BOOL)a2;
- (void)rebuildInstallIndexes;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2 completion:(id /* block */)a3;
- (void)_placeholderIconUpdatedForApp:(id)a0;
- (void)loadProportions;
- (void)sendNotification:(id)a0 ForPlugins:(id)a1;
- (void)sendNotification:(id)a0 forApplicationExtensionRecords:(id)a1;
- (void)sendNotification:(int)a0 forAppProxies:(id)a1 Plugins:(BOOL)a2 completion:(id /* block */)a3;
- (void)installationFailedForApplication:(id)a0;
- (void)addObserver:(id)a0;
- (void)setProgressProportionsByPhase:(id)a0 forInstallOfApplicationWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)installationEndedForApplication:(id)a0 withState:(unsigned long long)a1;
- (void)discardProportionsForBundleID:(id)a0;
- (void)directlySendNotification:(int)a0 withProxies:(id)a1 toObserver:(id)a2;
- (void)sendDatabaseRebuiltNotification;

@end
