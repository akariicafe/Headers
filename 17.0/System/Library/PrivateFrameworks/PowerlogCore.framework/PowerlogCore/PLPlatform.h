@interface PLPlatform : NSObject

+ (BOOL)isWatch;
+ (BOOL)isAudioClass:(int)a0;
+ (id)kPLPlatformAttributes;
+ (BOOL)internalBuild;
+ (BOOL)isiPad;
+ (BOOL)hasCapability:(int)a0;
+ (BOOL)carrierBuild;
+ (BOOL)isiPhone;
+ (BOOL)kPLGPSClassIsOneOf:(int)a0;
+ (BOOL)isCameraClass:(int)a0;
+ (BOOL)hasOrb;
+ (BOOL)isWiFiClass:(int)a0;
+ (BOOL)isMac;
+ (BOOL)isBasebandMavLeg;
+ (id)kPLDeviceMap;
+ (BOOL)isAppleTV;
+ (BOOL)isiOS;
+ (BOOL)hasLPEM;
+ (BOOL)is64Bit;
+ (BOOL)hasBaseband;
+ (BOOL)hasAOD;
+ (BOOL)kPLXIsOneOf:(int)a0 firstArg:(int)a1 restOfArgs:(char *)a2;
+ (BOOL)hasNFC;
+ (BOOL)hasAOT;
+ (BOOL)kPLWiFiClassIsOneOf:(int)a0;
+ (BOOL)isTVOS;
+ (BOOL)isBasebandProto;
+ (BOOL)kPLTorchClassIsOneOf:(int)a0;
+ (BOOL)kPLDisplayClassIsOneOf:(int)a0;
+ (BOOL)isBasebandIce;
+ (id)kPLDeviceClassName;
+ (BOOL)kPLSoCClassIsOneOf:(int)a0;
+ (int)kPLBasebandClassOfDevice;
+ (int)kPLGPSClassOfDevice;
+ (BOOL)hasDCP;
+ (BOOL)isGPSClass:(int)a0;
+ (id)wrapDeviceArgumentsInArray:(int)a0;
+ (BOOL)isDisplayClass:(int)a0;
+ (int)kPLTorchClassOfDevice;
+ (BOOL)isARMMac;
+ (int)kPLSoCClassOfDevice;
+ (int)kPLDeviceClass;
+ (int)kPLCameraClassOfDevice;
+ (BOOL)isSoCClass:(int)a0;
+ (int)kPLAudioClassOfDevice;
+ (int)kPLWiFiClassOfDevice;
+ (BOOL)isDeviceClass:(int)a0;
+ (BOOL)kPLCameraClassIsOneOf:(int)a0;
+ (BOOL)isiPod;
+ (BOOL)isHomePod;
+ (BOOL)hasSleepMedia;
+ (BOOL)hasOLED;
+ (BOOL)isBasebandClass:(int)a0;
+ (BOOL)kPLDeviceClassIsOneOf:(int)a0;
+ (BOOL)isTorchClass:(int)a0;
+ (BOOL)kPLBasebandClassIsOneOf:(int)a0;
+ (BOOL)isDeviceClassName:(id)a0;
+ (int)kPLDisplayClassOfDevice;
+ (BOOL)isBasebandDSDS;
+ (BOOL)kPLAudioClassIsOneOf:(int)a0;
+ (BOOL)nonUIBuild;
+ (BOOL)isArchARM;
+ (BOOL)seedBuild;

@end
