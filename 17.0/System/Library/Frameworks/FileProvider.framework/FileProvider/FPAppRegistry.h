@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, FPAppRegistryDaemonConnectionOverride, FPAppRegistryDelegate;

@interface FPAppRegistry : NSObject {
    NSMutableDictionary *_appMetadataByBundleID;
    NSMutableDictionary *_appMetadataByDisplayName;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _updateAppsNotification;
}

@property (class, retain, nonatomic) id<FPAppRegistryDaemonConnectionOverride> daemonConnectionOverride;
@property (class, readonly) BOOL keepInSync;
@property (class, retain) FPAppRegistry *sharedRegistry;

@property (weak, nonatomic) id<FPAppRegistryDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *listOfMonitoredApps;

- (id)init;
- (void)removeAppsWithBundleIDs:(id)a0;
- (void)dealloc;
- (void)addApps:(id)a0;
- (void).cxx_destruct;
- (int)_registerForNotification:(id)a0 handler:(id /* block */)a1;
- (id)appForBundleID:(id)a0;
- (void)_addApps:(id)a0;
- (id)_bundleIDForHomonymOfApp:(id)a0;
- (BOOL)_isAppLibrary:(id)a0 appMetadata:(id *)a1 userVisible:(BOOL *)a2;
- (void)_removeAppsWithBundleIDs:(id)a0;
- (void)_setApps:(id)a0;
- (id)appForDisplayName:(id)a0;
- (BOOL)isAppLibrary:(id)a0;
- (id)promoteItemToAppLibraryIfNeeded:(id)a0;
- (void)updateAppList;

@end
