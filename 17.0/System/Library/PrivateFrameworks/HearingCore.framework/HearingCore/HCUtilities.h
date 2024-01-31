@interface HCUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isProtectedDataAvailable;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)watchSupportsPairingHearingAids;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)deviceIsPhone;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)deviceIsSmallPhone;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (long long)systemBootTime;
+ (BOOL)deviceIsWatch;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)currentProcessIsSystemApp;
+ (double)roundToPercentageValue:(double)a0;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)deviceIsPod;
+ (BOOL)currentProcessIsHealth;
+ (BOOL)deviceIsPad;
+ (id)bluetoothManagerQueue;
+ (BOOL)supportsLEA2;
+ (BOOL)deviceIsBigPhone;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)deviceIsMultiUser;
+ (BOOL)supportsAlwaysListening;

@end
