@class NSString, HDProfile, NSUUID, NSObject;
@protocol HDAllowedCountriesDataSource, OS_os_log, HDRegionAvailabilityProvidingDelegate, HDPairedDeviceCapabilityProviding;

@interface HDWatchAndCompanionCountrySetIntersectionAvailabilityProvider : NSObject <HDAllowedCountriesDataSourceObserver, HDObservableRegionAvailabilityProviding> {
    id<HDAllowedCountriesDataSource> _allowedCountriesDataSource;
    HDProfile *_profile;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    NSUUID *_featureCapability;
    BOOL _reloadsLocalCountrySetOnRemoteCountrySetUpdate;
    NSObject<OS_os_log> *_loggingCategory;
}

@property (weak, nonatomic) id<HDRegionAvailabilityProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastContentVersionDuringReloadAttemptDomainForProfile:(id)a0;

- (id)regionAvailability;
- (void)allowedCountriesDataSourceDidUpdateActiveRemoteCountrySet:(id)a0;
- (id)initWithAllowedCountriesDataSource:(id)a0 profile:(id)a1 featureCapability:(id)a2 loggingCategory:(id)a3;
- (void)allowedCountriesDataSourceDidUpdateLocalCountrySet:(id)a0;
- (id)regionAvailabilityForDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithAllowedCountriesDataSource:(id)a0 profile:(id)a1 featureCapability:(id)a2 reloadsLocalCountrySetOnRemoteCountrySetUpdate:(BOOL)a3 loggingCategory:(id)a4;
- (id)onboardingEligibilityForCountryCode:(id)a0 device:(id)a1;
- (id)onboardingEligibilityForCountryCode:(id)a0;

@end
