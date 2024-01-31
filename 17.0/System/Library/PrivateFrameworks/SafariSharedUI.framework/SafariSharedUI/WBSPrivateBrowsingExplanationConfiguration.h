@class WBSPrivacyProxyAvailabilityManager, WBSSearchProvider;

@interface WBSPrivateBrowsingExplanationConfiguration : NSObject

@property (nonatomic) long long biometryType;
@property (nonatomic) BOOL userHasPassword;
@property (retain, nonatomic) WBSPrivacyProxyAvailabilityManager *privacyProxyAvailabilityManager;
@property (retain, nonatomic) WBSSearchProvider *privateBrowsingSearchEngine;

- (void).cxx_destruct;

@end
