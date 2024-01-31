@class NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface RTVehicleLocationCompanionLink : NSObject

@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ vehicleEventHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_companionLinkConnected;
- (id)decodeVehicleEvent:(id)a0;
- (id)encodeVehicleEvent:(id)a0;
- (id)initWithQueue:(id)a0 companionLinkClient:(id)a1 vehicleEventHandler:(id /* block */)a2 deviceConnectionUpdateHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0 deviceConnectionUpdateHandler:(id /* block */)a1;
- (id)initWithQueue:(id)a0 vehicleEventHandler:(id /* block */)a1;
- (void)registerEventHandlers;
- (void)sendVehicleEvent:(id)a0 handler:(id /* block */)a1;

@end
