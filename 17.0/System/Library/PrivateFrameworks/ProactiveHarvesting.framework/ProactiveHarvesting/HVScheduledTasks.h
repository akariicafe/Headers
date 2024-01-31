@interface HVScheduledTasks : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _delayedBudgetedTaskScheduled;
}

+ (void)delayedBudgetedContentAvailable;
+ (void)registerScheduledTasks;

- (id)init;

@end
