@interface BGTaskSchedulerProxy : NSObject

+ (id)shared;

- (BOOL)registerForTaskWithIdentifier:(id)a0 launchHandler:(id /* block */)a1;

@end
