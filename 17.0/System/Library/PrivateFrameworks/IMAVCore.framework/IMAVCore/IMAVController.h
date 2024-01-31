@class NSArray, NSMutableArray;
@protocol IMAVControllerDelegate;

@interface IMAVController : NSObject

@property (retain, nonatomic) NSMutableArray *_delegates;
@property (readonly, nonatomic) BOOL _ready;
@property (readonly, nonatomic) BOOL hasActiveConference;
@property (readonly, nonatomic) BOOL hasRunningConference;
@property (readonly, nonatomic) unsigned int overallChatState;
@property (readonly, nonatomic) BOOL cameraCapable;
@property (readonly, nonatomic) BOOL microphoneCapable;
@property (readonly, nonatomic) BOOL cameraConnected;
@property (readonly, nonatomic) BOOL microphoneConnected;
@property (nonatomic) BOOL blockMultipleIncomingInvitations;
@property (nonatomic) BOOL blockIncomingInvitationsDuringCall;
@property (nonatomic) BOOL blockOutgoingInvitationsDuringCall;
@property (readonly, nonatomic) NSArray *delegates;
@property (nonatomic) id<IMAVControllerDelegate> delegate;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)requestPendingACInvitations;
- (id)init;
- (void)updateActiveConference;
- (BOOL)_shouldObserveConferences;
- (void)_dumpCaps;
- (void)removeDelegate:(id)a0;
- (void)_setServiceVCCaps:(unsigned long long)a0 toCaps:(unsigned long long)a1;
- (void)cancelVCRequestWithBuddy:(id)a0 vcProps:(id)a1 forAccount:(id)a2 conferenceID:(id)a3 reason:(id)a4;
- (BOOL)_shouldRunConferences;
- (void)pushCachedVCCapsToDaemon;
- (id)vcResponseInfoWithSessionID:(unsigned int)a0;
- (void)setIMAVCapabilities:(long long)a0 toCaps:(long long)a1;
- (void)_receivedPendingVCRequests;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (BOOL)_shouldRunACConferences;
- (void)setupIMAVController;
- (void)setHasActiveConference:(BOOL)a0;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)a0;
- (void).cxx_destruct;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 conferenceID:(id)a3;
- (void)_receivedPendingACRequests;
- (void)declineVCRequestWithBuddy:(id)a0 response:(unsigned int)a1 vcProps:(id)a2 forAccount:(id)a3 conferenceID:(id)a4;
- (void)requestPendingVCInvitations;
- (void)setHasRunningConference:(BOOL)a0;

@end
