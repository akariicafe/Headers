@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)isiPad;
+ (BOOL)isDNUEnabled;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isAudioAccessory;
+ (id)internalDeviceCode;
+ (BOOL)isBetaBuild;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isLowEndHardware;
+ (BOOL)isInternalBuild;
+ (id)deviceUUID;
+ (BOOL)shouldIncludePredictionLogs;

- (id)init;
- (void)dealloc;

@end
