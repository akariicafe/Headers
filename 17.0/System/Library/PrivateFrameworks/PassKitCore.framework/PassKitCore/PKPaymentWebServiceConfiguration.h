@class NSDictionary, NSURL, NSNumber;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSNumber *_version;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *configuration;
@property (readonly, copy) NSURL *configurationURL;

- (id)numberOfDaysBetweenMapsReprocessingForRegion:(id)a0;
- (id)featureWithType:(long long)a0 inRegion:(id)a1;
- (id)brokerURLForRegion:(id)a0;
- (id)applyServiceFeaturesForRegion:(id)a0;
- (id)_regionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2 supportedRegions:(BOOL)a3;
- (id)init;
- (unsigned long long)hash;
- (BOOL)_lock_supportedForOSVersion:(id)a0 inRegion:(id)a1 deviceClass:(id)a2 platform:(id)a3 suportedRegions:(BOOL)a4;
- (id)unsupportedProvisioningExtensions;
- (double)provisioningEnablementPercentageForRegion:(id)a0;
- (BOOL)hasFeaturesSupportedForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (id)relayServerHostForRegion:(id)a0;
- (id)_lock_region:(id)a0;
- (id)discoveryManifestURLForRegion:(id)a0;
- (id)defaultServerURL;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (BOOL)buddyProvisioningEnabledForRegion:(id)a0;
- (BOOL)peerPaymentEnabledForRegion:(id)a0;
- (id)_lock_globalFeaturesForOSVersion:(id)a0 deviceClass:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)primaryFeaturedNetworkForRegion:(id)a0;
- (BOOL)buddyManualProvisioningEnabledForRegion:(id)a0;
- (id)relayServerHostsToHandleUniversalLinksForRegion:(id)a0;
- (BOOL)AMPNonDefaultBehaviourDisabledForRegion:(id)a0;
- (double)sharingMessageCacheTimeToLiveInterval;
- (BOOL)userCanResetCloudStoreApplePayViewForRegion:(id)a0;
- (BOOL)accountServiceEnabledForRegion:(id)a0;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (BOOL)paymentTransactionIconsEnabledForRegion:(id)a0;
- (id)marketsURL;
- (id)unsupportedWebPaymentConfigurations;
- (BOOL)manualProvisioningEnabledForRegion:(id)a0;
- (id)paymentSetupFeaturedNetworksForRegion:(id)a0;
- (BOOL)applyServiceEnabledForRegion:(id)a0;
- (BOOL)quickAccessForMoreRemovePassEnabled;
- (id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)a0;
- (BOOL)deviceCheckInDisabledForRegion:(id)a0;
- (id)heroImageManifestURLForRegion:(id)a0;
- (BOOL)suppressCardholderNameFieldForRegion:(id)a0;
- (double)deviceCheckInIntervalForRegion:(id)a0;
- (id)paymentServicesURLForRegion:(id)a0;
- (BOOL)browseProvisioningBankAppsEnabledForRegion:(id)a0;
- (id)betaPaymentNetworkVersionsForRegion:(id)a0;
- (id)marketGeoRegionNotificationTimeRangeForRegion:(id)a0;
- (unsigned long long)notificationAuthorizationPromptPresentationCount;
- (void).cxx_destruct;
- (BOOL)shouldEnableTransitServiceCheckInForRegion:(id)a0;
- (id)paymentServicesMerchantURLForRegion:(id)a0;
- (id)initWithConfiguration:(id)a0 url:(id)a1;
- (id)paymentSetupBrowsableProductTypesForRegion:(id)a0;
- (double)deviceUpgradeTaskEnablementPercentageForRegion:(id)a0;
- (BOOL)cameraFirstProvisioningEnabledForRegion:(id)a0;
- (id)contactFormatConfiguration;
- (id)stationCodeProvidersUsingLocalLookup;
- (BOOL)regionHasProvisioningEnablementPercentage:(id)a0;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (double)dynamicAssetPrefetchTimeIntervalForRegion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)allowedRelayServerHostsForRegion:(id)a0;
- (id)_lock_unsupported_regions;
- (id)_featuresFromDictionary:(id)a0 withRegion:(id)a1 osVersion:(id)a2 deviceClass:(id)a3;
- (double)paymentSetupFeaturesCacheUpdateIntervalForRegion:(id)a0;
- (BOOL)remotePaymentsRequiredForVoiceover;
- (id)credentialTypesRequiringDPANNotifications;
- (id)_lock_featuresForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)credentialTypesRequiringMetadata;
- (id)_lock_featuresForRegion:(id)a0;
- (id)_lock_regions;
- (id)betaPaymentNetworksForRegion:(id)a0;
- (id)_lock_unsupported_region:(id)a0;
- (BOOL)hasFeatureRequiringRegistrationInRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)supportedFeatureOfType:(long long)a0 inRegion:(id)a1 osVersion:(id)a2 deviceClass:(id)a3 didFailOSVersionRequirements:(BOOL *)a4;
- (id)featuresForRegion:(id)a0;

@end
