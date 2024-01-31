@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AVResourceReclamationController : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSHashTable *weakResourceReclaimableObjects;
}

+ (id)defaultController;

- (id)init;
- (void)dealloc;
- (BOOL)_isTrackingObject:(id)a0;
- (void)_removeAllObjectsTestOnly;
- (void)addObjectForTrackingOnQueue:(id)a0;
- (void)addObjectsWithReclaimableResources:(id)a0;

@end
