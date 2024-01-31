@class VKMapView, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MIController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    VKMapView *_mapView;
}

@property (readonly, nonatomic) BOOL isActive;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)sendData:(id)a0;
- (void)handleXPCEvent:(id)a0;
- (void)activateController:(id)a0;
- (void)deactivateController;
- (void)decodeDebugTreeData:(id)a0;
- (void)recievedData:(id)a0;

@end
