@class NSString, NSDateFormatter, WiFiLocationManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiLocaleManagerDelegate;

@interface WiFiLocaleManager : NSObject <WiFiLocationManagerDelegate> {
    struct __CTServerConnection { } *_ctServerConnectionRef;
}

@property BOOL localeCheckSuspended;
@property (retain) NSString *localeCountryCode;
@property int localeSource;
@property double localeTimeout;
@property double localeLastUpdatedTime;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *localeTimer;
@property (retain) NSObject<OS_dispatch_source> *retryTimer;
@property int aggressiveRetryAttemptsRemaining;
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) WiFiLocationManager *locationManager;
@property unsigned char isWaitingForLocationUpdate;
@property unsigned char testModeEnabled;
@property int testMcc;
@property (retain) NSString *testHost11d;
@property (retain) NSString *testPeer;
@property (retain) NSString *testTimeZoneCC;
@property (retain) NSString *testUserDefaults;
@property (weak, nonatomic) id<WiFiLocaleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getStringOfLocaleSource:(int)a0;

- (id)getLocaleFromMcc;
- (id)init;
- (void)didUpdateLocations:(id)a0;
- (void)dealloc;
- (id)getLocaleFromUserDefaults;
- (void)retrySetCountryCode:(id)a0 source:(int)a1;
- (id)getLocaleFromCompanion;
- (void)determineLocale:(unsigned char)a0;
- (id)getLocaleUsingGeoLocationCache:(id)a0;
- (BOOL)shouldDetermineNewLocale;
- (double)getLocaleLastUpdatedTime;
- (id)getRestrictedCountryCodeFromTimezone;
- (id)getLocaleFromLocation:(id)a0;
- (void)determineAndSetLocale:(unsigned char)a0;
- (id)getLocaleFromPeer;
- (void)didChangeAuthorizationStatus;
- (void)setCountryCode:(id)a0 source:(int)a1;
- (void)setLocaleTestParams:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLocaleCheckSuspended;
- (id)getLocaleUsingBoundingBoxes:(id)a0;
- (unsigned char)getNetworkReachability;
- (id)applySetCountryCodeExceptions:(id)a0;
- (id)getLocaleFromTimezone;
- (id)getLocaleUsingReverseGeocoder:(id)a0;
- (BOOL)isDefaultCountryCode:(id)a0;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (id)getLocaleFromMultiple80211d;
- (void)didFailWithError:(id)a0;
- (int)getLocaleSource;
- (id)getLocaleCountryCode;

@end
