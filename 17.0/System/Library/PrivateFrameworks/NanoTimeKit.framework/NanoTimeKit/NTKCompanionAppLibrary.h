@class NSHashTable, NSString, NSRecursiveLock, NSArray, NSSet, CLKDevice, NSObject, NSMutableArray, NSIndexSet;
@protocol OS_dispatch_queue;

@interface NTKCompanionAppLibrary : NSObject <NTKCompanionAppDelegate, LSApplicationWorkspaceObserverProtocol, ACXDeviceConnectionDelegate, NTKSystemAppStateCache>

@property (retain, nonatomic) NSArray *allApps;
@property (retain, nonatomic) NSArray *firstPartyApps;
@property (retain, nonatomic) NSArray *watchSystemApps;
@property (retain, nonatomic) NSSet *installedSystemApplicationIdentifiers;
@property (retain, nonatomic) NSArray *thirdPartyApps;
@property (nonatomic) BOOL appConduitLoaded;
@property (copy, nonatomic) NSIndexSet *disabledComplicationTypesCache;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (retain, nonatomic) NSRecursiveLock *internalLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateProcessingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appProcessingQueue;
@property (retain, nonatomic) NSMutableArray *prewarmCallbacks;
@property (retain, nonatomic) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAppLibrary;

- (void)prewarmCompanionDaemonWithCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_activeDeviceChanged;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)a0;
- (BOOL)isRestrictedSystemApp:(id)a0;
- (void)_load;
- (void)applicationsInstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (void)_notifyAppUpdated:(id)a0;
- (void)companionAppWasUpdated:(id)a0;
- (void)applicationsUninstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (id)disabledComplicationTypes;
- (void)_loadApps;
- (void)_notifyAppAdded:(id)a0;
- (void)_notifyAppIconUpdated:(id)a0;
- (void).cxx_destruct;
- (void)applicationsUpdated:(id)a0 onDeviceWithPairingID:(id)a1;
- (void)_loadWatchApps;
- (void)companionAppUpdatedIcon:(id)a0;
- (void)applicationStateDidChange:(id)a0;
- (BOOL)isRemovedSystemApp:(id)a0;
- (void)addObserver:(id)a0;
- (void)_notifyAppRemoved:(id)a0;
- (void)_queue_loadApps;

@end
