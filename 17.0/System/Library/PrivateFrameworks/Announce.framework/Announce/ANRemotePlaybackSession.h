@class ANRemotePlaybackSessionServiceClientInterfaceProxy, NSString, ANXPCManager, NSObject;
@protocol OS_dispatch_queue, ANRemotePlaybackSessionDelegate;

@interface ANRemotePlaybackSession : NSObject <ANRemotePlaybackSessionServiceClientInterface, ANXPCManagerDelegate, ANXPCManagerCheckInProvider>

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) ANRemotePlaybackSessionServiceClientInterfaceProxy *delegateProxy;
@property (readonly, nonatomic) ANXPCManager *xpcManager;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (weak, nonatomic) id<ANRemotePlaybackSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)didReceiveAnnouncement:(id)a0 forGroupID:(id)a1;
- (void)managerDidInterruptConnection:(id)a0;
- (void)setPlaybackStartedForAnnouncement:(id)a0;
- (void)invalidate;
- (BOOL)endSession;
- (void)lastPlayedAnnouncementInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setPlaybackStoppedForAnnouncement:(id)a0;
- (void)managerDidInvalidateConnection:(id)a0;
- (void)checkInWithCompletionHandler:(id /* block */)a0;
- (BOOL)startSessionForGroupID:(id)a0 announcementsHandler:(id /* block */)a1;
- (void)_callHandler:(id)a0;
- (void)didUpdateAnnouncements:(id)a0 forGroupID:(id)a1;
- (void)setPlaybackEndedForAnnouncement:(id)a0;

@end
