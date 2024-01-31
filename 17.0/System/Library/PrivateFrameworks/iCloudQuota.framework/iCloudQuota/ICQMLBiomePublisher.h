@interface ICQMLBiomePublisher : NSObject

+ (id)_createEventWithMlServerScore:(id)a0 totalQuota:(id)a1 totalUsed:(id)a2 totalAvailable:(id)a3 bundleQuotaInBytes:(id)a4 commerceQuotaInBytes:(id)a5 iCloudSubscriptionEventType:(int)a6 displayEntry:(int)a7;
+ (id)_createEventWithQuotaInfoFrom:(id)a0 withType:(int)a1;
+ (void)_publishEvent:(id)a0;
+ (void)publishEventWithFetchOffersResponse:(id)a0;
+ (void)publishEventWithPushNotification:(id)a0;
+ (void)publishEventWithRefreshOfferDetailsResponse:(id)a0;
+ (void)publishOfferBuyActionEvent;
+ (void)publishOfferDisplayActionEvent;
+ (void)publishOfferDisplayActionEventWithBundleId:(id)a0;

@end
