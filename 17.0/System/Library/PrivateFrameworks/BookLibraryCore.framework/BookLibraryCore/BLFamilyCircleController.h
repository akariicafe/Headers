@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface BLFamilyCircleController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableSet *cachedDSIDs;
@property (retain, nonatomic) NSMutableSet *ignoredDSIDs;

+ (id)sharedInstance;

- (void)refreshWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dq_processFamilyCircle:(id)a0 completion:(id /* block */)a1;

@end
