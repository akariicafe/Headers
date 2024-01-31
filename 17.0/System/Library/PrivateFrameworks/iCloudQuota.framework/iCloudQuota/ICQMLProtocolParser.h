@interface ICQMLProtocolParser : NSObject

+ (id)parseMaxDelaySecsFromFetchOffersResponse:(id)a0;
+ (id)parseMaxDelaySecsFromPushNotification:(id)a0;
+ (BOOL)shouldCallMlDaemonForFetchOfferStub:(id)a0;
+ (BOOL)shouldCallMlDaemonForPushNotification:(id)a0;

@end
