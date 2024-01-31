@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)persistentConnectionSession;
- (id)maintenanceConnectionSession;
- (id)fmipRegisterInfo;
- (id)privateFirmwareUpdateSession;
- (id)separationMonitoringSession;
- (id)ownerSession;
- (id)privateOwnerSession;
- (id)firmwareUpdateSession;
- (id)tagSeparationSession;
- (id)trackingAvoidanceService;
- (id)beaconSharingSession;
- (id)settingsConfiguration;

@end
