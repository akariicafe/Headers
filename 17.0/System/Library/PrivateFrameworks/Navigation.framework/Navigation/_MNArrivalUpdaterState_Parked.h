@class NSString, MNVehicleMonitor;

@interface _MNArrivalUpdaterState_Parked : _MNArrivalUpdaterState <MNVehicleMonitorDelegate> {
    MNVehicleMonitor *_vehicleMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)state;
- (void).cxx_destruct;
- (void)onEnterState:(id)a0;
- (void)onLeaveState:(id)a0;
- (void)vehicleMonitorDidConnectToVehicle:(id)a0;

@end
