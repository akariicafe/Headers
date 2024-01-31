@interface RETrainingScheduler : NSObject

+ (id)schedulerWithBehavior:(unsigned long long)a0;

- (void)performTask:(id /* block */)a0;
- (void)cancelPendindTasks;

@end
