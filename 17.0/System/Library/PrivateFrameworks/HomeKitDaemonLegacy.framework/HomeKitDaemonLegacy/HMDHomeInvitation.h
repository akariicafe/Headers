@class NSUUID, NSDate, HMHomeInvitationData, HMFTimer, NSArray, NSString, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMHomeInvitationData *invitationData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (copy, nonatomic) id /* block */ resolutionHandler;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (retain, nonatomic) HMFTimer *timer;
@property (retain, nonatomic) NSArray *operations;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long invitationState;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly, nonatomic, getter=isAccepted) BOOL accepted;
@property (readonly, nonatomic, getter=isDeclined) BOOL declined;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)expire;
- (id)initWithCoder:(id)a0;
- (void)accept;
- (void)_clearTimer;
- (id)initWithCoder:(id)a0 invitationData:(id)a1;
- (void)decline;
- (void)_configureTimer;
- (id)initWithInvitationData:(id)a0 forHome:(id)a1;
- (void)_resolve:(BOOL)a0;
- (id)describeWithFormat;
- (void)notifyStateChangedForMessage:(id)a0;
- (BOOL)refreshDisplayName;
- (void)updateInvitationState:(long long)a0;
- (void)updateTimer:(unsigned long long)a0 clientQueue:(id)a1;

@end
