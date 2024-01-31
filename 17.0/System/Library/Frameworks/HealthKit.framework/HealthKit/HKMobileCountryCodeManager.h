@class RadiosPreferences, CoreTelephonyClient;

@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection { } *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

+ (id)_overrideISOCountryCode;
+ (void)setOverrideMobileCountryCode:(id)a0;
+ (id)overrideMobileCountryCode;
+ (BOOL)isOverridePresent;

- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)mobileCountryCodeFromCellularWithError:(id *)a0;
- (id)copyISOCountryCodeForMobileCountryCode:(id)a0 error:(id *)a1;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (BOOL)_isLocationAvailableWithError:(id *)a0;
- (void).cxx_destruct;
- (id)currentCountryCode;
- (id)currentEstimate;
- (void)_submitAnalyticsForError:(id)a0 mobileCountryCode:(id)a1;
- (id)_wrapperWithMobileCountryCode:(id)a0 error:(id *)a1;

@end
