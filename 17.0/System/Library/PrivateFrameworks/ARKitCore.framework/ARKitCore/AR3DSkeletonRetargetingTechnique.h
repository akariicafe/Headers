@class ABPKRetargeting, ARCoreRESkeletonResults, NSObject;
@protocol OS_dispatch_semaphore;

@interface AR3DSkeletonRetargetingTechnique : ARTechnique {
    ABPKRetargeting *_abpkRetargeting;
}

@property (retain, nonatomic) ARCoreRESkeletonResults *latestResults;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resultSemaphore;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)init;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)prepare:(BOOL)a0;
- (id)_retargetSkeleton:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
