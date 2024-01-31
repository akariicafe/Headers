@class GEOCountryConfiguration, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MX_GEOCountryConfigurationObserver : NSObject {
    NSObject<OS_dispatch_queue> *mAccessQueue;
    GEOCountryConfiguration *mCountryConfiguration;
    NSString *mCountryCode;
}

- (id)init;
- (void)dealloc;
- (void)_updateCountryCodeFromCurrentGeoCountryConfiguration:(id)a0;
- (void)countryConfigurationDidChange:(id)a0;
- (id)getCurrentCountryCode;

@end
