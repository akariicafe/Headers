@class NSString;

@interface MTGCDTaskScheduler : NSObject <MTTaskScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_scheduleTask:(id)a0 withCompletion:(id /* block */)a1;
- (void)scheduleTask:(id)a0;
- (void)scheduleTaskGroup:(id)a0;

@end
