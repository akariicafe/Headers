@class NSXPCConnection, UIView, NSError, NSXPCListenerEndpoint, NSUUID, _EXRemoteViewController, _EXExtensionProcessHandle, NSString, NSObject, _EXHostConfiguration, NSXPCListener, _EXHostViewControllerSessionConfiguration;
@protocol OS_dispatch_queue, OS_os_activity, _EXHostViewControllerSessionDelegate;

@interface _EXHostViewControllerSession : NSObject <NSXPCListenerDelegate, _EXExtensionProcessObserver>

@property (readonly) BOOL requiresSceneHosting;
@property (retain) NSXPCConnection *sceneSessionConnection;
@property (retain) NSXPCListener *hostListener;
@property (weak) UIView *hostView;
@property unsigned long long signpost;
@property (retain) NSError *error;
@property (copy) id /* block */ readyBlock;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property struct { struct os_activity_scope_state_s { unsigned long long opaque[2]; } state; NSObject<OS_os_activity> *osActivity; } activity;
@property (retain, nonatomic) _EXRemoteViewController *remoteViewController;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long maxState;
@property (readonly, nonatomic) _EXHostConfiguration *processConfiguration;
@property (readonly, nonatomic) _EXHostViewControllerSessionConfiguration *configuration;
@property (weak, nonatomic) id<_EXHostViewControllerSessionDelegate> delegate;
@property (retain) _EXExtensionProcessHandle *extensionProcess;
@property (readonly) BOOL detached;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteViewControllerEndpoint;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sessionWithProcess:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
+ (void)sessionWithProcessConfiguration:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

- (void)dealloc;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)processDidInvalidate:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)requestRemoteViewController;
- (void)_internalQueue_prepareToHost;
- (void)_invalidateSession;
- (id)_makeXPCConnectionWithError:(id *)a0;
- (id)initWithProcessConfiguration:(id)a0 configuration:(id)a1;
- (id)initWithProcessConfiguration:(id)a0 configuration:(id)a1 detached:(BOOL)a2;
- (void)makeSceneHostViewController;
- (void)resumeWithReadyNotification:(id /* block */)a0;

@end
