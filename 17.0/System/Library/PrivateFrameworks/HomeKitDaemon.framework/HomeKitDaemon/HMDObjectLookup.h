@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMDObjectLookup : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSMapTable *uuidToObjectMapping;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (id)_lookUpObjectWithUUID:(id)a0 applyObjectChange:(id)a1 previous:(id)a2 result:(id)a3 completionHandler:(id /* block */)a4;
- (void)applyChange:(id)a0 previous:(id)a1 onObject:(id)a2 result:(id)a3 completionHandler:(id /* block */)a4;
- (void)lookUpAndApplyObjectChange:(id)a0 previous:(id)a1 result:(id)a2 completionHandler:(id /* block */)a3;
- (void)resetObjects;
- (void)scanObjects;

@end
