@class ABPK2dSkeleton, ABPKSkeleton, NSMutableArray, ABPKAlgorithmState;

@interface ABPKAlgOutput : NSObject

@property (retain) ABPK2dSkeleton *rawDetection2dSkeletonABPK;
@property (retain) ABPK2dSkeleton *detection2dSkeletonABPK;
@property (retain) NSMutableArray *rawDetection2dSkeletonABPKArray;
@property (retain) ABPKSkeleton *liftingSkeletonABPK;
@property (retain) ABPK2dSkeleton *registered2dSkeletonABPK;
@property (retain) ABPKSkeleton *retargetedSkeletonABPK;
@property (retain) ABPKAlgorithmState *algState;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;

@end
