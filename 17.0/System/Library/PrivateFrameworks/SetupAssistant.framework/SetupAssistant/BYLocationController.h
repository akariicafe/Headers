@class BYAnalyticsEventRecommendedLocale, NSArray, NSString, NSDate, NSDictionary, NSSet;

@interface BYLocationController : NSObject {
    NSString *_guessedCountryFromTelephony;
    NSDictionary *_aliasDict;
    NSSet *_validCountries;
    struct __WiFiManagerClient { } *fWifiManager;
    struct __WiFiDeviceClient { } *fWifiDevice;
}

@property (retain, nonatomic) NSDate *wirelessScanStartDate;
@property (retain, nonatomic) BYAnalyticsEventRecommendedLocale *recommendedLocaleAnalyticsEvent;
@property (nonatomic) unsigned long long numberOfWiFiScanAttemptsRemaining;
@property (retain, nonatomic) NSArray *guessedCountries;
@property (retain, nonatomic) NSArray *firstGuessedLanguages;
@property (nonatomic) BOOL fakeMode;

+ (id)sharedBuddyLocationController;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_checkForAliases:(id)a0;
- (id)_checkForAliasesOrInvalid:(id)a0;
- (id)_checkedArrayForString:(id)a0;
- (void)_closeWifiConnection;
- (id)_countriesFromDefaults;
- (id)_countryFromTelephony;
- (void)_getWifiDevice;
- (void)_scanComplete:(id)a0 error:(BOOL)a1;
- (void)_scanWifiList;
- (void)_scanWifiListWithDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)_setGuessedCountryDefault:(id)a0;
- (void)_startWifiScan;
- (id)aliasDict;
- (void)configureForAnalytics:(id)a0;
- (BOOL)getCountryFromTelephony;
- (id)guessedCountryFromTelephony;
- (id)guessedLanguages;

@end
