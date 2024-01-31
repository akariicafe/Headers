@class NSDate, NSString, NSURL, NSArray, PKPaymentWebServiceRegion, PKPaymentWebServiceConfiguration, NSDictionary, NSMutableDictionary;

@interface PKPaymentWebServiceContext : PKWebServiceContext {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_context;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    NSDictionary *_regions;
    PKPaymentWebServiceConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSMutableDictionary *_featureSupportedLanguageCache;
}

@property long long consistencyCheckBackoffLevel;
@property (copy) NSArray *certificates;
@property (copy) NSString *lastUpdatedTag;
@property long long version;
@property (copy) NSString *deviceID;
@property (copy) NSString *secureElementID;
@property (copy) NSString *pushToken;
@property (copy) NSString *nextPushToken;
@property (copy) NSString *companionSerialNumber;
@property BOOL devSigned;
@property (copy) NSDate *registrationDate;
@property (copy) NSDate *archivedDate;
@property (copy) NSDate *configurationDate;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property BOOL transactionServiceDisabled;
@property BOOL messageServiceDisabled;
@property BOOL ignoreProvisioningEnablementPercentage;
@property (copy) NSDictionary *regions;
@property (copy) NSString *primaryRegionIdentifier;
@property (readonly, weak) PKPaymentWebServiceRegion *primaryRegion;
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccount;

+ (BOOL)supportsSecureCoding;
+ (id)contextWithArchive:(id)a0;
+ (void)_migrateContext:(id)a0;
+ (void)_migrateFrom0To1:(id)a0;

- (void)archiveAtPath:(id)a0;
- (id)regionForIdentifier:(id)a0;
- (void)atomicallyUpdateEveryRegion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)TSMPushTopics;
- (BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)verificationRequestRecordForUniqueID:(id)a0;
- (id)TSMURLStringByPushTopic;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)a0;
- (BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)a0 paymentNetwork:(long long)a1;
- (BOOL)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)a0;
- (id)applyServicePushTopics;
- (double)_contextProvisioningEnablementValue;
- (void)removeVerificationRequestRecordForUniqueID:(id)a0;
- (void).cxx_destruct;
- (void)atomicallyUpdatePrimaryRegion:(id /* block */)a0;
- (void)atomicallyUpdateRegionWithIdentifier:(id)a0 updateBlock:(id /* block */)a1;
- (id)accountServicePushTopics;
- (id)debugDescription;
- (void)_localizationUpdated;
- (id)notificationPushTopics;
- (id)_regionWithPeerPaymentServiceURL;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)a0 mainLanguageBundle:(id)a1;
- (id)betaPaymentNetworksForRegion:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)a0 mainLanguageBundle:(id)a1;
- (void)addVerificationRequestRecord:(id)a0 forUniqueID:(id)a1;

@end
