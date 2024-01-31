@class NSString;
@protocol SKAChannelManagingDelegate, SKAAccountProviding, SKAPushManaging;

@interface SKAChannelManager : NSObject <SKAPushManagingDelegate, SKAChannelManaging>

@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (weak, nonatomic) id<SKAChannelManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_jwtTokenNotFoundError;
+ (id)_serverResponseError;

- (void)pushManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (id)_getStatusJWTToken;
- (void)unsubscribeFromPresenceChannels:(id)a0;
- (id)serverTime;
- (void)enableActivityTracking;
- (id)initWithPushManager:(id)a0 accountProvider:(id)a1 delegate:(id)a2;
- (id)_getPresenceJWTToken;
- (void)createPresenceChannelWithMembershipKey:(id)a0 serverKey:(id)a1 serviceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)disableActivityTracking;
- (void)releasePresenceOnChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 timestamp:(id)a3 withChannelToken:(id)a4 serviceIdentifier:(id)a5 completion:(id /* block */)a6;
- (void)pushManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 dateReceived:(id)a3 dateExpired:(id)a4;
- (void)subscribeToStatusChannels:(id)a0;
- (void)pollActiveParticipantsForChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 withChannelToken:(id)a3 serviceIdentifier:(id)a4 completion:(id /* block */)a5;
- (void)unsubscribeFromStatusChannels:(id)a0;
- (void)subscribeToPresenceChannels:(id)a0;
- (id)_createPayloadDataFromData:(id)a0;
- (void)activeStatusChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (void)activePresenceChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)publishData:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 isPendingPublish:(BOOL)a4 isScheduledPublish:(BOOL)a5 retryCount:(unsigned long long)a6 completion:(id /* block */)a7;
- (void)assertPresence:(id)a0 onChannel:(id)a1 membershipKey:(id)a2 serverKey:(id)a3 timestamp:(id)a4 withChannelToken:(id)a5 serviceIdentifier:(id)a6 isRefresh:(BOOL)a7 completion:(id /* block */)a8;
- (id)_getNonce;
- (void)createChannelWithCompletion:(id /* block */)a0;

@end
