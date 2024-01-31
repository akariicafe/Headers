@class NSString;

@interface HMDCoreDataCloudTransformMergePolicy : NSMergePolicy <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;

@end
