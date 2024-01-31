@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ANPlaybackSessionServiceListener : NSObject <ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, NSXPCListenerDelegate, ANAnnouncementCoordinatorDelegate, ANRemotePlaybackStatusProvider>

@property (readonly, nonatomic) NSXPCListener *localPlaybackSessionListener;
@property (readonly, nonatomic) NSXPCListener *remotePlaybackSessionListener;
@property (readonly, nonatomic) BOOL remoteSessionsActive;
@property (retain) NSMutableSet *remotePlaybackClients;
@property (retain) NSMutableSet *localPlaybackClients;
@property (readonly) NSObject<OS_dispatch_queue> *playbackClientsSerialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanForExit;
- (id)init;
- (BOOL)_endSessionForConnection:(id)a0;
- (void)setPlaybackStartedForAnnouncement:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)coordinator:(id)a0 didReceiveAnnouncement:(id)a1 forGroupID:(id)a2 forEndpointID:(id)a3;
- (void)coordinator:(id)a0 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)a1 forEndpointID:(id)a2;
- (id)_clientForConnection:(id)a0;
- (void)playbackStateForEndpointID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendPlaybackCommand:(id)a0 forEndpointID:(id)a1 completionHandler:(id /* block */)a2;
- (void)coordinator:(id)a0 didUpdateAnnouncements:(id)a1 forGroupID:(id)a2 forEndpointID:(id)a3;
- (void)coordinator:(id)a0 didUpdatePlaybackState:(unsigned long long)a1 forEndpointID:(id)a2;
- (void)endSessionWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)lastPlayedAnnouncementInfoForEndpointID:(id)a0 completionHandler:(id /* block */)a1;
- (void)resumeWithEndpointID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPlaybackStoppedForAnnouncement:(id)a0;
- (void)coordinator:(id)a0 didFinishPlayingAnnouncementsForEndpointID:(id)a1;
- (void)_removeConnection:(id)a0;
- (void)startSessionForGroupID:(id)a0 reply:(id /* block */)a1;
- (BOOL)isExternalPlaybackActiveForEndpointID:(id)a0;
- (void)_setTimersActive:(BOOL)a0 forEndPointID:(id)a1;

@end
