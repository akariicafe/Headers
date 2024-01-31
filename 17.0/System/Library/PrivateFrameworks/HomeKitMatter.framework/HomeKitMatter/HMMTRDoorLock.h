@class NSString;

@interface HMMTRDoorLock : MTRBaseClusterDoorLock <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)readAttributeLockTargetStateWithCompletionHandler:(id /* block */)a0;

@end
