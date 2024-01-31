@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDDonationHandler : HMFObject <HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedDonationHandler;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)_donateActionSet:(id)a0 withMessage:(id)a1;
- (void)_donateIntent:(id)a0 withActionSet:(id)a1;
- (void)_removeIntentForActionSet:(id)a0;
- (void)donateActionSet:(id)a0 withMessage:(id)a1;
- (void)removeIntentForActionSet:(id)a0;

@end
