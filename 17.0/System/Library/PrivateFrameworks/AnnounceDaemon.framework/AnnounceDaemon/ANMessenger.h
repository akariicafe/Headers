@class ANParticipant, NSString, NSObject;
@protocol ANIDSConnectionProvider, OS_os_log, ANRapportConnectionProvider, ANMessengerDelegate;

@interface ANMessenger : NSObject <ANConnectionDelegate>

@property (readonly, nonatomic) id<ANRapportConnectionProvider> rapportConnection;
@property (readonly, nonatomic) id<ANIDSConnectionProvider> idsConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (weak, nonatomic) id<ANMessengerDelegate> delegate;
@property (readonly, nonatomic) ANParticipant *localParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)performPreflightChecksForSendingContent:(id)a0 toHome:(id)a1 rooms:(id)a2 zones:(id)a3;
+ (id)performRapportValidationForAnnouncement:(id)a0 withSenderContext:(id)a1;
+ (id)locationForReplyToAnnouncement:(id)a0 home:(id)a1 idsService:(id)a2;
+ (id)announcementForAccessory:(id)a0 inHome:(id)a1 fromAnnouncement:(id)a2;
+ (id)performIDSValidationForAnnouncement:(id)a0 withSenderContext:(id)a1;
+ (id)locationForHome:(id)a0 rooms:(id)a1 zones:(id)a2 idsService:(id)a3;
+ (BOOL)_isAnnouncerAdminInAnnouncement:(id)a0 home:(id)a1;
+ (id)validateAnnouncerInAnnouncement:(id)a0 home:(id)a1;
+ (id)_performPreflightChecksForSendingContent:(id)a0 toHome:(id)a1;
+ (void)purgeTemporaryFiles;
+ (id)announcementForUser:(id)a0 inHome:(id)a1 fromAnnouncement:(id)a2;
+ (void)_setIdentifiersForIDSService:(id)a0 inLocation:(id)a1 home:(id)a2;
+ (id)_performPreflightChecksForSendingToRooms:(id)a0 zones:(id)a1;
+ (id)performBasicValidationForAnnouncement:(id)a0 type:(unsigned long long)a1;
+ (id)createAnnouncementWithRequest:(id)a0 forLocation:(id)a1 inHome:(id)a2 isReply:(BOOL)a3 error:(id *)a4;
+ (id)announcementForDevice:(id)a0 inHome:(id)a1 fromAnnouncement:(id)a2;

- (void)cleanForExit;
- (id)init;
- (id)connectionDidReceiveRequestForHomeLocationStatus:(id)a0;
- (void)_sendAnnouncement:(id)a0 toDestination:(id)a1 sentHandler:(id /* block */)a2;
- (void)_relayAnnouncementThroughHomePod:(id)a0 inHome:(id)a1 rooms:(id)a2 sentHandler:(id /* block */)a3;
- (double)_calculateAnnouncementDeadline:(id)a0;
- (void)mockAnnouncement:(id)a0 playbackDeadline:(id)a1 sentHandler:(id /* block */)a2;
- (void)broadcastReply:(id)a0 forAnnouncement:(id)a1 completion:(id /* block */)a2;
- (void)sendAnnouncement:(id)a0 sentHandler:(id /* block */)a1;
- (void)sendReply:(id)a0 forAnnouncement:(id)a1 completion:(id /* block */)a2;
- (void)_fulfillRelayRequest:(id)a0 withSenderContext:(id)a1 sentHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_willTargetReachableDevicesForAnnouncement:(id)a0 inDestination:(id)a1;
- (void)connection:(id)a0 failedDeliveryForMessage:(id)a1 withError:(id)a2;
- (void)forwardAnnouncementToCompanion:(id)a0;
- (id)getScanningDeviceCandidates;
- (void)_forwardRelayRequest:(id)a0 withSenderContext:(id)a1 sentHandler:(id /* block */)a2;
- (void)_logDebugInfoForHome:(id)a0;
- (void)sendRequest:(id)a0 sentHandler:(id /* block */)a1;
- (id)initWithIDSConnection:(id)a0 rapportConnection:(id)a1;
- (void)connection:(id)a0 didReceiveMessage:(id)a1 fromSender:(id)a2 senderContext:(id)a3 handler:(id /* block */)a4;

@end
