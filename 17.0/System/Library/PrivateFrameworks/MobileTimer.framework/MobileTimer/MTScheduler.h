@interface MTScheduler : NSObject

+ (id)globalAsyncSchedulerWithPriority:(unsigned int)a0;
+ (id)serialSchedulerForObject:(id)a0 priority:(unsigned int)a1;
+ (id)serialSchedulerWithName:(id)a0;
+ (id)serialSchedulerWithName:(id)a0 priority:(unsigned int)a1;
+ (id)serialSchedulerForObject:(id)a0;
+ (id)serialSchedulerWithQueue:(id)a0;
+ (unsigned int)defaultPriority;

@end
