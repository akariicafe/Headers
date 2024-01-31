@class NSString, NSObject;
@protocol OS_dispatch_queue, APXPCActivityDelegate, OS_xpc_object;

@interface APXPCActivity : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;

@property (retain, nonatomic) id<APXPCActivityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL deferralCheckActive;
@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) BOOL staticActivity;

+ (id)_translateCriteria:(id)a0;

- (void)checkin;
- (BOOL)finished;
- (BOOL)shouldDefer;
- (BOOL)_continueActivity;
- (void)scheduleWithDelay:(long long)a0;
- (BOOL)setActivityState:(long long)a0;
- (BOOL)deferActivity;
- (void)_startDeferralCheck;
- (void)schedule;
- (void).cxx_destruct;
- (void)_endDeferralCheck;
- (id)initWithDelegate:(id)a0;
- (void)cancel;
- (void)_backgroundDeferralCheck;
- (void)_registerActivityWithCriteria:(id)a0;

@end
