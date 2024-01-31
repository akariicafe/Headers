@class HMDLaunchHandler;

@interface HMDEventTriggerDependencyFactory : NSObject <HMDEventTriggerDependencyFactory>

@property (readonly, nonatomic) HMDLaunchHandler *launchHandler;

- (id)createTimerWithTimeInterval:(double)a0 options:(unsigned long long)a1;

@end
