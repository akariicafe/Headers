@class NSUUID, HMFMessage, NSObject;
@protocol OS_dispatch_queue;

@interface HMDRemoteReadRequestMessage : HMFObject

@property (readonly, nonatomic) HMFMessage *readMessage;
@property (readonly, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithReadMessage:(id)a0 accessoryUUID:(id)a1 responseQueue:(id)a2;

@end
