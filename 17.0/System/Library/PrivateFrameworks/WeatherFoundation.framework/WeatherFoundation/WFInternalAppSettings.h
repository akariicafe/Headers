@class WFWeatherEventsConfig, NSString, NSSet, NSDictionary, NSURL;

@interface WFInternalAppSettings : NSObject <WFSettings>

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

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
