@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HMDHomeKitCoreServer : HMFObject <HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *homekitCoreXPCQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *homekitCoreXPCConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *homekitCoreXPCStoreConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
