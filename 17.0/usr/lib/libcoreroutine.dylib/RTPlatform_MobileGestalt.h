@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {
    NSUserDefaults *_userDefaults;
    RTNanoRegistry *_nanoRegistry;
}

- (id)productType;
- (id)init;
- (id)initWithNanoRegistry:(id)a0 userDefaults:(id)a1;
- (BOOL)macOSPlatform;
- (BOOL)watchPlatform;
- (id)systemModel;
- (id)deviceClass;
- (BOOL)lowEndHardware;
- (BOOL)supportsScenarioTriggers;
- (BOOL)isTinkerPaired;
- (BOOL)iPhonePlatform;
- (id)userAssignedDeviceName;
- (BOOL)supportsMultiUser;
- (BOOL)internalInstall;
- (BOOL)realityDevice;
- (BOOL)simulatorPlatform;
- (BOOL)supportsCoreRoutineCapability;
- (id)systemVersion;
- (void).cxx_destruct;
- (BOOL)isWatchPaired;
- (BOOL)iPhoneDevice;

@end
