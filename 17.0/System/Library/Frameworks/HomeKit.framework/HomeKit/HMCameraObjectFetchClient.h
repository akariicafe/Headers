@class NSObject, NSUUID, _HMContext, NSString, NSDictionary, NSMutableArray, HMFMessageDestination;
@protocol OS_dispatch_queue;

@interface HMCameraObjectFetchClient : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSMutableArray *fetchedObjects;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *messageName;
@property (readonly, copy) HMFMessageDestination *destination;
@property (copy) NSDictionary *payload;
@property (retain) Class classForUnarchiving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)fetchWithCompletion:(id /* block */)a0;
- (void)handleDidFetchObjectsMessage:(id)a0;
- (id)initWithUUID:(id)a0 context:(id)a1 messageName:(id)a2 destination:(id)a3;

@end
