@interface AVTTransitionSchedulerFactory : NSObject

+ (id)concurrentTransitionSchedulerWithEventHandler:(id /* block */)a0 delay:(double)a1;
+ (id)synchronousTransitionSchedulerWithEventHandler:(id /* block */)a0;

@end
