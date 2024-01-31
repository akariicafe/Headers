@class NSArray, NSString, NSURL, RCDebugOverrides, RCDeviceInfo, RCBackgroundFetchConfiguration;

@interface RCConfigurationSettings : NSObject <RCSerializable>

@property (readonly, nonatomic) NSURL *fallbackURL;
@property (readonly, nonatomic) NSArray *requestInfos;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) RCDeviceInfo *deviceInfo;
@property (readonly, nonatomic) RCDebugOverrides *debugOverrides;
@property (readonly, copy, nonatomic) NSString *loggingKey;
@property (readonly, nonatomic) RCBackgroundFetchConfiguration *backgroundFetchConfiguration;
@property (readonly, nonatomic) BOOL useBackgroundRefreshRate;
@property (readonly, nonatomic) unsigned long long requestMode;
@property (readonly, nonatomic) double endpointTimeoutDuration;
@property (readonly, nonatomic) double fallbackTimeoutDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 requestMode:(unsigned long long)a7;
- (id)JSONRepresentation;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 userID:(id)a2 storefrontID:(id)a3 bundleID:(id)a4 deviceInfo:(id)a5 debugOverrides:(id)a6 backgroundFetchConfiguration:(id)a7;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8 backgroundFetchConfiguration:(id)a9 requestMode:(unsigned long long)a10 endpointTimeoutDuration:(double)a11 fallbackTimeoutDuration:(double)a12;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 requestMode:(unsigned long long)a7 endpointTimeoutDuration:(double)a8 fallbackTimeoutDuration:(double)a9;
- (BOOL)isValid;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8 requestMode:(unsigned long long)a9 endpointTimeoutDuration:(double)a10;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6;
- (void).cxx_destruct;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 backgroundFetchConfiguration:(id)a7 requestMode:(unsigned long long)a8 endpointTimeoutDuration:(double)a9 fallbackTimeoutDuration:(double)a10;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7;
- (id)dictionaryRepresentation;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 requestMode:(unsigned long long)a8;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 requestMode:(unsigned long long)a7 endpointTimeoutDuration:(double)a8;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
