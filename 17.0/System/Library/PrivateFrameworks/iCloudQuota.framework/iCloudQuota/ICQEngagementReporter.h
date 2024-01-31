@interface ICQEngagementReporter : NSObject

+ (void)sendEventFor:(long long)a0 withBundleID:(id)a1 link:(id)a2;
+ (id)_createOpportunityBubbleFrom:(id)a0 bundleID:(id)a1;
+ (id)_eventNameForEngagementType:(long long)a0;
+ (id)_placementDictionary;
+ (void)_sendBubbleDisplayedEventFor:(id)a0;
+ (void)_sendImpressionEventWithName:(id)a0 bundleID:(id)a1;
+ (void)_sendSubscriptionChangedEvent;
+ (void)fetchBubbleContentWithBundleID:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowOpportunityBubbleWithBundleID:(id)a0 completion:(id /* block */)a1;

@end
