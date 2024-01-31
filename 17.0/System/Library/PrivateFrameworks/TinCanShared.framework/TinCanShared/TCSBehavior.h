@class NSString;

@interface TCSBehavior : NSObject {
    int _firstUnlockToken;
}

@property (readonly, nonatomic) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL isAppleInternalInstall;
@property (readonly, nonatomic) BOOL isM8Device;
@property (readonly, nonatomic) BOOL isRunningInStoreDemoModeOrSimulator;
@property (readonly, nonatomic) NSString *regionCode;

+ (BOOL)isAppleInternalInstall;
+ (id)regionCode;
+ (BOOL)_isAppleInternalInstall;
+ (id)sharedBehavior;
+ (id)_regionCode;
+ (BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isM8Device;
+ (BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isRunningInStoreDemoModeOrSimulator;
+ (BOOL)isM8Device;
+ (BOOL)isRunningInStoreDemoModeOrSimulator;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleDeviceFirstUnlock;

@end
