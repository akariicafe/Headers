@class AMSBagValue, SHMusicSubscriptionStatus, ICLightweightMusicSubscriptionStatusRequest, AMSBag;

@interface SHRemoteConfiguration : NSObject

@property (retain, nonatomic) ICLightweightMusicSubscriptionStatusRequest *subscriptionRequest;
@property (retain, nonatomic) SHMusicSubscriptionStatus *musicSubscriptionStatus;
@property (retain, nonatomic) AMSBag *amsBag;
@property (retain, nonatomic) AMSBagValue *endpointsBagValue;
@property (retain, nonatomic) AMSBagValue *internalHostBagValue;
@property (retain, nonatomic) AMSBagValue *externalHostBagValue;
@property (retain, nonatomic) AMSBagValue *campaignTokenBagValue;
@property (retain, nonatomic) AMSBagValue *defaultValuesBagValue;
@property (retain, nonatomic) AMSBagValue *languageTagBagValue;
@property (retain, nonatomic) AMSBagValue *featureFlagsBagValue;
@property (retain, nonatomic) AMSBagValue *shazamOfferAPIHostsBagValue;
@property (retain, nonatomic) AMSBagValue *shazamOfferAPIEndpointsBagValue;
@property (retain, nonatomic) AMSBagValue *cacheValuesBagValue;
@property (retain, nonatomic) AMSBagValue *recorderConfigurationBagValue;

+ (id)sharedInstance;

- (id)initWithBag:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cacheValuesWithCompletion:(id /* block */)a0;
- (void)campaignTokenWithCompletion:(id /* block */)a0;
- (void)defaultValuesWithCompletion:(id /* block */)a0;
- (void)didChangeMusicSubscriptionStatus:(id)a0;
- (void)endpointsWithCompletion:(id /* block */)a0;
- (void)featureFlagsWithCompletion:(id /* block */)a0;
- (void)fetchMusicSubscriptionStatus;
- (void)hostForClientType:(long long)a0 completion:(id /* block */)a1;
- (void)offerValuesWithCompletion:(id /* block */)a0;
- (void)populateRemoteConfiguration;
- (void)recorderConfigurationWithCompletion:(id /* block */)a0;
- (id)recorderConfigurationWithPromise;
- (void)shazamOfferAPIHostWithCompletion:(id /* block */)a0;
- (void)shazamOfferAPIURLPathWithCompletion:(id /* block */)a0;

@end
