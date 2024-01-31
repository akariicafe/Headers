@class FCCDateProvider, NSObject;
@protocol OS_dispatch_queue, FCCXPCActivitySchedulerDelegate;

@interface FCCXPCActivityScheduler : NSObject {
    FCCDateProvider *_dateProvider;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (weak, nonatomic) id<FCCXPCActivitySchedulerDelegate> delegate;

- (id)init;
- (void)cancelActivityWithName:(id)a0;
- (id)_stringForXPCActivityState:(long long)a0;
- (void)scheduleActivityWithName:(id)a0 scheduledDate:(id)a1;
- (void)_runActivity:(id)a0 name:(id)a1;
- (void)_checkInActivity:(id)a0 name:(id)a1 scheduledDate:(id)a2;
- (void).cxx_destruct;
- (id)initWithDateProvider:(id)a0 dispatchQueue:(id)a1;

@end
