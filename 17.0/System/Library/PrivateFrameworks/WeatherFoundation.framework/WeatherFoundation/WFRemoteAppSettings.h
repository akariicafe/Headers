@class WFWeatherEventsConfig, NSString, NSDictionary, NSSet, NSDate, NSURL;

@interface WFRemoteAppSettings : NSObject <WFSettings>

@property (class, readonly, nonatomic) BOOL wfInternalBuild;

@property (readonly, nonatomic) long long appConfigRefreshRate;
@property (readonly, nonatomic) NSDate *lastModificationDate;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned long long apiConfigModdedHash;
@property (readonly, nonatomic) unsigned long long apiConfigMinRange;
@property (readonly, nonatomic) unsigned long long apiConfigMaxRange;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSString *apiVersion;
@property (readonly, nonatomic) NSSet *aqiEnabledCountryCodes;
@property (readonly, nonatomic) NSString *apiVersionFallback;
@property (readonly, nonatomic) unsigned long long networkFailedAttemptsLimit;
@property (readonly, nonatomic) unsigned long long networkSwitchExpirationTimeInSeconds;
@property (readonly, nonatomic) unsigned long long locationNumDecimalsOfPrecision;
@property (readonly, nonatomic) WFWeatherEventsConfig *weatherEventsConfig;
@property (readonly, nonatomic) NSDictionary *widgetRefreshPolicy;
@property (readonly, nonatomic) NSURL *appAnalyticsEndpointUrl;
@property (readonly, nonatomic) float dataSamplingRate;
@property (readonly, nonatomic) float telemetrySamplingRate;
@property (readonly, nonatomic) float locationGeocodingSamplingRate;
@property (readonly, nonatomic) double userIdentifierResetTimeInterval;
@property (readonly, nonatomic) double privateUserIdentifierResetTimeInterval;
@property (readonly, nonatomic) double cachedGeocodeLocationExpirationTimeInterval;
@property (readonly, nonatomic) double locationUpdateMinTimeInterval;
@property (readonly, nonatomic) double locationUpdateMinDistance;
@property (readonly, nonatomic) BOOL disableForecastRequestCancelation;
@property (readonly, nonatomic) BOOL disablePriorityForecastRequestQueue;
@property (readonly, nonatomic) BOOL loadSavedCitiesFromKVSOnly;
@property (readonly, nonatomic) BOOL disableLimitReverseGeocoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wfSeedBuild;
+ (BOOL)useInternalBundleID;
+ (id)configurationWithData:(id)a0 bundleIDs:(id)a1 country:(id)a2 userID:(id)a3 error:(id *)a4;
+ (id)configurationWithData:(id)a0 userID:(id)a1 error:(id *)a2;
+ (id)defaultSettings;
+ (id)bundleIDsListFor:(id)a0 useInternalBundleID:(BOOL)a1 useSeedBundleID:(BOOL)a2;

- (id)getAPIVersionFromDictionary:(id)a0 userID:(id)a1;
- (void).cxx_destruct;
- (id)getEnvironmentSpecificConfigDictionaryFromDictionary:(id)a0 bundleIDs:(id)a1 country:(id)a2;
- (id)initWithConfigDictionary:(id)a0 bundleIDs:(id)a1 country:(id)a2 userID:(id)a3;
- (BOOL)aqiEnabledForCountryCode:(id)a0;
- (id)getSpecificConfigFromConfigs:(id)a0 configSpecifiers:(id)a1 specifierKey:(id)a2;
- (BOOL)shouldUseAPIVersionFromDictionary:(id)a0 userID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
