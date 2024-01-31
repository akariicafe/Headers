@interface SUCorePolicyFamily : NSObject

+ (id)_copyGestaltValueForKey:(struct __CFString { } *)a0;
+ (id)_getGenericDefaultAssetTypeForKind:(int)a0;
+ (id)_getIOSAssetTypeForKind:(int)a0;
+ (id)_getMacOSAssetTypeForKind:(int)a0;
+ (id)_getNERDBRAINAssetTypeForKind:(int)a0;
+ (id)_getNERDCAssetTypeForKind:(int)a0;
+ (id)_getNERDSUAssetTypeForKind:(int)a0;
+ (id)_getPlatformDefaultAssetTypeForKind:(int)a0;
+ (id)_getTVOSAssetTypeForKind:(int)a0;
+ (id)_getWatchOSAssetTypeForKind:(int)a0;
+ (id)getAssetTypeForKind:(int)a0 usingFamily:(int)a1;
+ (int)getFamilyForBuildTarget;
+ (int)getFamilyUsingDeviceClass:(id)a0;
+ (id)getNameForSUCorePolicyAssetFamily:(int)a0;
+ (id)getNameForSUCorePolicyAssetKind:(int)a0;

@end
