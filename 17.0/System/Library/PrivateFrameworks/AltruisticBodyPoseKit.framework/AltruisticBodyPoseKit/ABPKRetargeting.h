@class NSUUID;

@interface ABPKRetargeting : NSObject {
    NSUUID *_skeletonIdentifier;
    struct CoreIKSolver { } *_coreIKSolver;
}

- (id)init;
- (void)dealloc;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (id)_retargetSkeleton:(id)a0;

@end
