@interface BDSSyncUserDefaults : NSObject

+ (BOOL)isSignedIntoICloud;
+ (id)iCloudIdentity;
+ (BOOL)isGlobalICloudDriveSyncOptedIn;
+ (BOOL)_isBundleIdentifierInArray:(struct __CFArray { } *)a0;
+ (BOOL)_isServiceDisabledAlternative:(struct __CFString { } *)a0;
+ (BOOL)_isServiceEnabledAlternative:(struct __CFString { } *)a0;
+ (void)_setService:(struct __CFString { } *)a0 enabled:(BOOL)a1;
+ (id)_stateForLog;
+ (BOOL)isCloudKitSyncOptedIn;
+ (BOOL)isICloudDriveSyncOptedIn;
+ (id)makeOSStateHandler;

@end
