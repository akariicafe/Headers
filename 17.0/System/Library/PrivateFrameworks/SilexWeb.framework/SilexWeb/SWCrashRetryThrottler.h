@class NSString;

@interface SWCrashRetryThrottler : NSObject <SWProcessTerminationPolicyDecider>

@property (nonatomic) BOOL crashed;
@property (readonly, nonatomic) unsigned long long retryPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldReloadAfterWebProcessCrash;

@end
