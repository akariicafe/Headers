@class NSString, BSServiceConnectionListener, SBAppSwitcherSettings, SBSwitcherDemoFilteringController, NSObject, NSMutableArray, FBServiceClientAuthenticator, SBRecentAppLayouts;
@protocol OS_dispatch_queue;

@interface SBSwitcherDemoCommandsServer : NSObject <BSServiceConnectionListenerDelegate, SBSSwitcherDemoCommandsClientToServerInterface> {
    SBAppSwitcherSettings *_switcherSettings;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    SBRecentAppLayouts *_recents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_removeConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (BOOL)stashSwitcherModelToPath:(id)a0;
- (BOOL)loadStashedSwitcherModelFromPath:(id)a0;
- (void).cxx_destruct;
- (void)_queue_addConnection:(id)a0;
- (BOOL)setShouldDisableSwitcherModelUpdates:(id)a0;
- (BOOL)updateHiddenApplicationBundleIDs:(id)a0;
- (id)initWithRecentAppLayouts:(id)a0 demoFilteringController:(id)a1;

@end
