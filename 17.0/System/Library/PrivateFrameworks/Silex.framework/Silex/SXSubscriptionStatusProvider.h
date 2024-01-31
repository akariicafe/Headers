@class NSString;

@interface SXSubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding>

@property (readonly, nonatomic) long long bundleSubscriptionStatus;
@property (readonly, nonatomic) long long channelSubscriptionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
