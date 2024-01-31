@class NSUUID, NSString, NSObject, HMDRemoteEventRouterServer;
@protocol OS_dispatch_queue;

@interface HMDRemoteEventRouterServerMessageReceiver : NSObject <HMFMessageReceiver> {
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_queue;
    HMDRemoteEventRouterServer *_server;
}

@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleRequestMessage:(id)a0;

@end
