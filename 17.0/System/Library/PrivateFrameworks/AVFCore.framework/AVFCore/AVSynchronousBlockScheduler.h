@class NSString;

@interface AVSynchronousBlockScheduler : NSObject <AVBlockScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleBlock:(id /* block */)a0;

@end
