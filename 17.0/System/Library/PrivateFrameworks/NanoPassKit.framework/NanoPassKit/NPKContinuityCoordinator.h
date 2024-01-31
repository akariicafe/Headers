@class NSUserActivity, NSObject;
@protocol OS_dispatch_queue;

@interface NPKContinuityCoordinator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserActivity *provisionPassUserActivity;
@property (retain, nonatomic) NSUserActivity *getPaymentPassesUserActivity;
@property (retain, nonatomic) NSUserActivity *passListUserActivity;
@property (retain, nonatomic) NSUserActivity *individualPassUserActivity;
@property (retain, nonatomic) NSUserActivity *setUpPeerPaymentUserActivity;
@property (retain, nonatomic) NSUserActivity *viewPeerPaymentUserActivity;
@property (weak, nonatomic) NSUserActivity *currentUserActivity;

+ (id)sharedContinuityCoordinator;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (void)_saveUserActivity:(id)a0;
- (id)_skeletonBridgeUserActivity;
- (void)invalidateAllActivities;
- (id)userActivityForPassWithUniqueID:(id)a0;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)a0;
- (void)userNeedsToSetUpPeerPayment;
- (void)userNeedsToViewPeerPaymentForHandle:(id)a0;
- (void)userViewingPassList;
- (void)userViewingPassWithUniqueID:(id)a0 isPaymentPass:(BOOL)a1;

@end
