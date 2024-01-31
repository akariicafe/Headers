@class NSNumber, ICQOpportunityBubbleSpecification;

@interface ICQPremiumOffer : ICQOffer

@property (nonatomic) BOOL dismissed;
@property (nonatomic) BOOL isBadgeApp;
@property (nonatomic) BOOL shouldStartOnDeviceJourney;
@property (retain, nonatomic) ICQOpportunityBubbleSpecification *opportunityBubble;
@property (retain, nonatomic) NSNumber *bundleQuotaInfo;
@property (retain, nonatomic) NSNumber *commerceQuotaInfo;

- (void)shouldShowOpportunityBubbleWithCompletion:(id /* block */)a0;
- (id)_commerceStorageLevelFromServerDict:(id)a0;
- (void)shouldShowOpportunityBubbleWithDisplayRuleResult:(BOOL)a0 completion:(id /* block */)a1;
- (id)_ICQOpportunityBubbleSpecificationForServerDict:(id)a0 bundleId:(id)a1;
- (id)initWithServerDictionary:(id)a0 accountAltDSID:(id)a1 notificationID:(id)a2 retrievalDate:(id)a3 callbackInterval:(double)a4 bundleIdentifier:(id)a5;
- (id)serverUIURL;
- (BOOL)_hasFollowupEnabledFromServerDict:(id)a0;
- (BOOL)getBadgeAppFromServerDict:(id)a0;
- (id)_parseQuotaInfo:(id)a0;
- (void).cxx_destruct;
- (id)_bundleStorageLevelFromServerDict:(id)a0;
- (id)_serverUIURLFromOfferContents;

@end
