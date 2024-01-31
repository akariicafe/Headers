@class BSServiceConnection, NSString, FBServiceClientAuthenticator, NSMutableSet, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, BSServiceConnectionHost;

@interface SBMultitaskingApplicationShortcutService : NSObject <SBSMultitaskingApplicationShortcutServiceClientToServerInterface, BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
    BSServiceConnection<BSServiceConnectionHost> *_spotlightConnection;
    NSMutableSet *_spotlightInterestedBundleIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (oneway void)fetchSupportedShortcutActionsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (oneway void)performShortcutAction:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)stopObservingUpdatesForBundleIdentifier:(id)a0;
- (void)_handleDisconnectForServiceConnection:(id)a0;
- (long long)_switcherShortcutActionForRequestedAction:(long long)a0;
- (void)updateSupportedShortcutsForInterestedClients;

@end
