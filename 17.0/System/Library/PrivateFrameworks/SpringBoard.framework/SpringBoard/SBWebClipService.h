@class NSNumber, NSString, BSServiceConnectionListener, SBLockScreenManager, SBApplicationPlaceholderController, SBApplicationController, SBMainDisplaySceneManager, NSObject, FBServiceClientAuthenticator, NSMutableArray, SBMainWorkspace;
@protocol OS_dispatch_queue;

@interface SBWebClipService : NSObject <BSServiceConnectionListenerDelegate, SBSWebClipServiceClientToServerInterface> {
    SBMainWorkspace *_workspace;
    SBMainDisplaySceneManager *_sceneManager;
    SBApplicationPlaceholderController *_placeholderController;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    FBServiceClientAuthenticator *_legacyClientAuthenticator;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableArray *_connections;
    unsigned long long _pendingLaunchGenerationCount;
    NSString *_pendingBundleIdentifier;
    NSString *_pendingWebClipIdentifier;
    NSNumber *_pendingLaunchOrigin;
}

@property (nonatomic) double pendingLaunchTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bestWebClipForTargetContentIdentifier:(id)a0 fromWebClips:(id)a1;

- (void)_applicationsDidChange:(id)a0;
- (void)_queue_removeConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)_queue_addConnection:(id)a0;
- (void)launchWebClipWithIdentifier:(id)a0 origin:(id)a1;
- (void)updateWebClipPropertiesWithIdentifier:(id)a0;
- (void)_beginWaitingForBundleIdentifier:(id)a0 webClipIdentifier:(id)a1 launchOrigin:(id)a2;
- (void)_clearPendingLaunch;
- (void)_generateUserActivityDataFromUserActivity:(id)a0 completion:(id /* block */)a1;
- (void)_placeholdersDidChange:(id)a0;
- (void)buildLaunchActionsForAppClipWithWebClipIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initForTestingWithPlaceholderController:(id)a0 applicationController:(id)a1;
- (id)initWithWorkspace:(id)a0 sceneManager:(id)a1 placeholderController:(id)a2 applicationController:(id)a3 lockScreenManager:(id)a4;
- (void)prepareToLaunchWebClipWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)targetApplicationBundleIdentifierForWebClip:(id)a0;

@end
