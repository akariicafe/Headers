@class NSUUID, ANParticipant, ANAnnouncementStatePublisher, NSString, NSSet, NSMutableDictionary, ANCompanionConnection, _TtC14AnnounceDaemon31SiriReferenceResolutionDonation, NSObject, ANMessenger, NSMapTable;
@protocol OS_dispatch_queue, OS_os_log, ANRemotePlaybackStatusProvider;

@interface ANAnnouncementCoordinator : NSObject <ANAnnouncementManagerDelegte, ANPlaybackManagerDelegate, ANPlaybackManagerDataSource, ANMessengerDelegate, ANCompanionConnectionDelegate>

@property (class, readonly, nonatomic) NSUUID *localDeviceIdentifier;

@property (readonly, nonatomic) ANParticipant *localParticipant;
@property (readonly, nonatomic) NSSet *scanningDeviceCandidates;
@property (readonly, nonatomic) ANMessenger *messenger;
@property (readonly, nonatomic) NSMutableDictionary *announcementManagers;
@property (readonly, nonatomic) NSMutableDictionary *playbackManagers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *delegatesToQueues;
@property (retain, nonatomic) ANCompanionConnection *companionConnection;
@property (retain, nonatomic) ANAnnouncementStatePublisher *playbackStatePublisher;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) _TtC14AnnounceDaemon31SiriReferenceResolutionDonation *siriRRDonation;
@property (weak, nonatomic) id<ANRemotePlaybackStatusProvider> remotePlaybackStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCoordinator;

- (void)cleanForExit;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeOldAnnouncementsForEndpointID:(id)a0;
- (id)init;
- (void)playbackManager:(id)a0 didFinishPlayingAnnouncement:(id)a1 withOptions:(unsigned long long)a2;
- (void)receivedAnnouncement:(id)a0;
- (unsigned long long)playbackStateForEndpointID:(id)a0;
- (void)_executeBlockForDelegates:(id /* block */)a0;
- (void)playbackManager:(id)a0 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)a1;
- (void)announcementManager:(id)a0 announcements:(id)a1 didChangeForGroupID:(id)a2;
- (void)failedToDeliverAnnouncement:(id)a0 error:(id)a1;
- (id)_createPlaybackManagerForIdentifier:(id)a0;
- (void)performPlaybackCommand:(id)a0 endpointID:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackManager:(id)a0 didUpdatePlaybackState:(unsigned long long)a1 announcement:(id)a2;
- (void)addAnnouncement:(id)a0 forEndpointID:(id)a1 completion:(id /* block */)a2;
- (id)_createAnnouncementManagerForIdentifier:(id)a0;
- (id)_endpointIDForAnnouncementManager:(id)a0;
- (id)announcementsForPlaybackManager:(id)a0;
- (void)mockAnnouncement:(id)a0 playbackDeadline:(id)a1 sentHandler:(id /* block */)a2;
- (void)resetAllTimersForEndpointID:(id)a0;
- (id)resolveIdentifier:(id)a0;
- (id)announcementsForIDs:(id)a0 endpointID:(id)a1;
- (void)_handleReceivedAnnouncement:(id)a0;
- (void)updateAnnouncement:(id)a0 statusFlags:(unsigned long long)a1 endpointID:(id)a2;
- (id)_endpointIDForPlaybackManager:(id)a0;
- (void)playbackManager:(id)a0 didStartPlayingAnnouncement:(id)a1;
- (void)companionDidPlayAnnouncement:(id)a0;
- (void).cxx_destruct;
- (void)setPlaybackStartedForAnnouncement:(id)a0 endpointID:(id)a1;
- (void)_initializeManagers;
- (void)playbackManagerDidFinishPlayingAnnouncements:(id)a0;
- (id)allAnnouncementsSortedByReceiptForEndpointID:(id)a0;
- (id)lastPlayedAnnouncementInfoForEndpointID:(id)a0;
- (id)playbackManager:(id)a0 announcementsForIdentifiers:(id)a1;
- (void)resumeAllTimersForEndpointID:(id)a0;
- (void)_removeManagersForIdentifier:(id)a0;
- (void)sendRequest:(id)a0 sentHandler:(id /* block */)a1;
- (BOOL)_removePlaybackManagerForIdentifier:(id)a0;
- (void)cleanUpOldAnnouncementsForPlaybackManager:(id)a0;
- (void)_notifyDidReceiveAnnouncement:(id)a0 forEndpointID:(id)a1;
- (id)announcementsForGroupID:(id)a0 endpointID:(id)a1;
- (BOOL)_removeAnnouncementManagerForIdentifier:(id)a0;
- (void)setPlaybackStoppedForAnnouncement:(id)a0 endpointID:(id)a1;
- (id)announcementForID:(id)a0 endpointID:(id)a1;
- (void)pauseAllTimersForEndpointID:(id)a0;

@end
