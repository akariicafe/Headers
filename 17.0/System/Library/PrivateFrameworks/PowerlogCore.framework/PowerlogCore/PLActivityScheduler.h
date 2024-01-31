@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLActivityScheduler : NSObject

@property (retain) NSMutableDictionary *activities;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (id)init;
- (void)cancelActivityWithIdentifier:(id)a0;
- (void)scheduleActivityWithIdentifier:(id)a0 withCriteria:(id)a1 withMustRunCriterion:(id)a2 withQueue:(id)a3 withInterruptBlock:(id /* block */)a4 withActivityBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (id)lastCompletedDateWithIdentifier:(id)a0;

@end
