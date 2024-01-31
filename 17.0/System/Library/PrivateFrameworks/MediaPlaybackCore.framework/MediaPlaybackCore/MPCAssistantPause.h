@class NSObject;
@protocol OS_dispatch_queue;

@interface MPCAssistantPause : NSObject {
    NSObject<OS_dispatch_queue> *deviceUIDsQueue;
}

- (void).cxx_destruct;
- (void)pauseDevicesByUID:(id)a0 withRefId:(id)a1 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a2 source:(id)a3 completion:(id /* block */)a4;
- (void)pauseDevicesByUID:(id)a0 withRefId:(id)a1 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a2 completion:(id /* block */)a3;

@end
