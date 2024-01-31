@class NSString, MNVehicleMonitor, NSTimer;
@protocol MNParkedVehicleDetectorDelegate;

@interface MNParkedVehicleDetector : NSObject <GEOConfigChangeListenerDelegate, MNVehicleMonitorDelegate> {
    BOOL _isMonitoring;
    MNVehicleMonitor *_vehicleMonitor;
    int _simulateParkedVehicleEventToken;
    NSTimer *_locationStoppedTimer;
    BOOL _locationStoppedCondition;
    NSTimer *_vehicleDisconnectExpirationTimer;
    BOOL _vehicleDisconnectedCondition;
}

@property (weak, nonatomic) id<MNParkedVehicleDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)stopMonitoring;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)_checkParkingConditions;
- (void)_locationStoppedTimer:(id)a0;
- (void)_updateForParkedCar;
- (void)_updateVehicleMonitorShouldStart:(BOOL)a0;
- (void)updateForLocation:(id)a0;
- (void)vehicleMonitorDidConnectToVehicle:(id)a0;
- (void)vehicleMonitorDidDisconnectFromVehicle:(id)a0;

@end
