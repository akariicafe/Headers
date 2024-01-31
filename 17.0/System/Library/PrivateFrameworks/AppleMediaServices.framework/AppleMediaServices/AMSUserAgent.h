@class NSString, AMSMappedBundleInfo, AMSProcessInfo;
@protocol AMSDeviceInfo;

@interface AMSUserAgent : NSObject

@property (readonly, nonatomic) AMSMappedBundleInfo *bundleInfo;
@property (readonly, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, nonatomic) id<AMSDeviceInfo> deviceInfoProvider;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;

+ (id)_sharedCache;
+ (void)cacheUserAgent:(id)a0 forBundleIdentifier:(id)a1;
+ (id)userAgentForProcessInfo:(id)a0;
+ (id)cachedUserAgentForBundleIdentifier:(id)a0;

- (id)_iOSComponentBuildVersion;
- (id)_iOSComponentClientInfo;
- (id)_compiledAMSCoreUserAgent;
- (id)compile;
- (id)initWithProcessInfo:(id)a0;
- (id)_userAgentSuffix;
- (id)_initWithProcessInfo:(id)a0 deviceInfoProvider:(id)a1;
- (id)_compileAndShouldCache:(BOOL *)a0;
- (void).cxx_destruct;
- (id)_iOSComponentHardwarePlatform;
- (id)_compiledAMSUserAgentShouldCache:(BOOL *)a0;
- (id)_sharedComponentFrameworkVersion;
- (id)_iOSComponentProductVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0 productType:(id)a1;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_iOSComponentDeviceModel;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0;

@end
