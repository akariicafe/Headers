@class NSString;

@interface FCBackgroundActivityScheduler : NSObject <FCBackgroundActivityScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_makeFromFCResult:(long long)a0;
- (id)_makeFullIdentifierFromIdentifier:(id)a0;
- (void)cancelRepeatingTaskWithIdentifier:(id)a0;
- (void)requestBackgroundAppRefreshStartingAfter:(id)a0 before:(id)a1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)a0 identifier:(id)a1 task:(id /* block */)a2;

@end
