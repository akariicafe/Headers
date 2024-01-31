@class VGExternalAccessoryState, NSString, NSMutableDictionary, VGExternalAccessoryModelFilter, VGVehicleState, NSObject, VGVehicle;
@protocol VGExternalAccessoryUpdating, OS_dispatch_queue;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    VGExternalAccessoryModelFilter *_modelFilter;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_firmwareId;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_isConnectedToCarPlayAccessory;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (void)_checkAvailableAccessoriesAndAttachIfNeeded;
- (BOOL)_isConnectedToElectricVehicle;
- (id)_modelIdFromArguments:(id)a0;
- (id)_vehicleStateForCurrentState;
- (BOOL)_isConnectedVehicleAllowlisted;
- (void)_updateFromVehicleInfo:(id)a0;
- (BOOL)isConnectedToVehicle:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isAccessoryTracked:(id)a0;
- (void)_removeCarPlayAccessory:(id)a0;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (id)_identifier;
- (void)_addNewCarPlayAccessory:(id)a0;
- (void)_accessoryDidDisconnect:(id)a0;
- (void)_accessoryDidConnect:(id)a0;
- (id)_bluetoothIdentifier;
- (void)_accessoryDidUpdateVehicle:(id)a0;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (void)_notifyDelegateWithCurrentVehicle;
- (id)_vehicleForCurrentState;

@end
