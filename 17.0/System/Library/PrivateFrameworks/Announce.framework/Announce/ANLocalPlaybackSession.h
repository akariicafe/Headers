@class NSUUID, ANXPCManager, ANLocalPlaybackSessionInterfaceDelegateProxy, NSDictionary, NSString;
@protocol ANLocalPlaybackSessionDelegate;

@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate, ANXPCManagerDelegate, ANXPCManagerCheckInProvider>

@property (readonly, nonatomic) ANLocalPlaybackSessionInterfaceDelegateProxy *delegateProxy;
@property (readonly, nonatomic) ANXPCManager *xpcManager;
@property (readonly, nonatomic) NSUUID *endpointIdentifier;
@property (readonly, nonatomic) NSDictionary *lastPlayedAnnouncementInfo;
@property (readonly, nonatomic) unsigned long long playbackState;
@property (weak, nonatomic) id<ANLocalPlaybackSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForPlaybackState:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (void)didReceiveAnnouncement:(id)a0 forGroupID:(id)a1;
- (void)announcementsStateUpdate:(unsigned long long)a0;
- (void)managerDidInterruptConnection:(id)a0;
- (void)playAnnouncementsWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithEndpointIdentifier:(id)a0;
- (void)invalidate;
- (void)sendPlaybackCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)lastPlayedAnnouncementInfoWithCompletion:(id /* block */)a0;
- (void)announcementsWillStartPlaying:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)stopPlayingAnnouncementsWithCompletionHandler:(id /* block */)a0;
- (void)playAnnouncementsWithOptions:(unsigned long long)a0 startingAt:(id)a1 completionHandler:(id /* block */)a2;
- (void)managerDidInvalidateConnection:(id)a0;
- (void)stopPlayingAnnouncements;
- (void)playAnnouncements;
- (void)checkInWithCompletionHandler:(id /* block */)a0;
- (void)previousAnnouncementWithCompletionHandler:(id /* block */)a0;
- (void)playAnnouncementsWithIDs:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)nextAnnouncementWithCompletionHandler:(id /* block */)a0;

@end
