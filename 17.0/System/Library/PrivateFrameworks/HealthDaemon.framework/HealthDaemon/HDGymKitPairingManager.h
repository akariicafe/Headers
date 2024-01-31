@class HDWatchAppStateMonitor, NSString, HDPowerAssertion, HDFitnessMachineSession, HDNearFieldInterface, NSMutableDictionary, HDGymKitSettings, NSObject, HDProfile, HDFitnessMachineSimulatorSupport, HDFitnessMachineStateTimers;
@protocol OS_dispatch_queue, HDGymKitPairingManagerDelegate;

@interface HDGymKitPairingManager : NSObject <HDFitnessMachineStateTimersDelegate, HDGymKitSettingsDelegate, HDWatchAppStateMonitorDelegate, HDNearFieldInterfaceDelegate, HDCurrentWorkoutObserver, HDFitnessMachineConnectionInitiatorProtocol> {
    HDNearFieldInterface *_nearFieldInterface;
    NSObject<OS_dispatch_queue> *_queue;
    HDPowerAssertion *_tagReadPowerAssertion;
    unsigned long long _bluetoothState;
    HDFitnessMachineStateTimers *_fitnessMachineStateTimers;
    HDWatchAppStateMonitor *_workoutAppStateMonitor;
    HDFitnessMachineSession *_fitnessMachineSession;
    HDProfile *_profile;
    unsigned long long _currentDiscovery;
    NSMutableDictionary *_connectionInitiatorClients;
    HDFitnessMachineSimulatorSupport *_simulatorSupport;
    BOOL _expressModeAssertionTaken;
    HDGymKitSettings *_gymKitSettings;
}

@property (weak, nonatomic) id<HDGymKitPairingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)workoutManager:(id)a0 didUpdateCurrentWorkout:(id)a1;
- (id)_newWatchAppStateMonitor;
- (void)reset;
- (void)dealloc;
- (void)nearFieldInterfaceFieldDetectionDidEndUnexpectedly:(id)a0;
- (id)initWithProfile:(id)a0;
- (id)_newNearFieldInterface;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)a0;
- (void)nearFieldInterfaceTagSessionDidEndUnexpectedly:(id)a0;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)a0 withConnectionUUID:(id)a1;
- (void)updatedFitnessMachineState:(unsigned long long)a0 fitnessMachineSessionUUID:(id)a1;
- (void)deliverError:(id)a0;
- (void)stateTimersUserAcceptanceTimeout:(id)a0;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)a0 activityType:(unsigned long long)a1 withConnectionUUID:(id)a2;
- (void)registerConnectionInitiatorClient:(id)a0 withConnectionUUID:(id)a1;
- (void)gymKitSettings:(id)a0 didChangeFromNFCPermission:(unsigned long long)a1 toNFCPermission:(unsigned long long)a2;
- (void)stateTimersFieldDetectTimeout:(id)a0;
- (void)workoutManager:(id)a0 currentWorkout:(id)a1 didChangeToState:(long long)a2;
- (void)stateTimersTagReadTimeout:(id)a0;
- (void)nearFieldInterfaceDidEnterField:(id)a0;
- (void)monitorDidDetectAppDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)updatedConnectionStateWithError:(id)a0;
- (void)simulateAccept;
- (void)nearFieldInterfaceDidReadTag:(id)a0;
- (void)monitorDidDetectAppActivate:(id)a0;
- (void)handleBLEConnectionCompletedSuccessfully:(BOOL)a0;
- (void)workoutAppIsReady;
- (void)updatedFitnessMachine;

@end
