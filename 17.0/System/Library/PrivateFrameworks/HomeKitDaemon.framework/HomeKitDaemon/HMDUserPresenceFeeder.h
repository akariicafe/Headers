@class NSString, HMDUserPresenceFeed, HMDUserPresenceFeedSession;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMDUserPresenceFeedSessionDelegate, HMFLogging>

@property (nonatomic) long long ckAccountStatus;
@property (nonatomic) BOOL isAccountStatusFetchInProgress;
@property (readonly, nonatomic) NSString *timerID;
@property (nonatomic) unsigned long long presenceRegionStatus;
@property (retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession;
@property (retain, nonatomic) HMDUserPresenceFeed *lastSentFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)_startRefreshTimer;
- (void)residentChanged;
- (void)_handleLocationAuthorizationChangedNotification:(id)a0;
- (id)_sendPresenceAuthStatusForUser:(id)a0 presenceAuthStatus:(id)a1 presenceRegionStatus:(id)a2 presenceComputeStatus:(id)a3 reason:(id)a4;
- (void)_sendPresenceReport:(unsigned long long)a0;
- (void)_sendPresenceUpdateToResident:(id)a0;
- (void)_sendPresenceUpdateToResidentForUser:(id)a0 presenceAuthStatus:(id)a1 authChanging:(BOOL)a2 reason:(id)a3;
- (void)_sendPresenceUpdateToResidentForUser:(id)a0 presenceAuthStatus:(id)a1 authChanging:(BOOL)a2 reason:(id)a3 fmfStatus:(id)a4;
- (void)_updatePresenceComputeStatus:(id)a0;
- (BOOL)_updatePresenceToResidentForUser:(id)a0 presenceAuthStatus:(id)a1 authChanging:(BOOL)a2 reason:(id)a3 fmfStatus:(id)a4;
- (void)accountAvailabilityChanged:(id)a0;
- (void)configure:(id)a0 messageDispatcher:(id)a1;
- (void)didEndFeedSession:(id)a0;
- (void)fetchCKAccountStatusAndSendPresenceReport;
- (void)fmfStatusUpdateNotification:(id)a0;
- (void)handleHomeDataLoadedNotification:(id)a0;
- (void)handleResidentDeviceConfirmed:(id)a0;
- (void)handleTimerFiredNotification:(id)a0;
- (void)homeDataProcessed;
- (void)notifyDidArriveHome;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidLeaveHomeRegion;
- (void)presenceAuthChanged;
- (void)presenceAuthStatusChangedForUser:(id)a0 presenceAuthStatus:(id)a1;

@end
