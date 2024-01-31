@class NSNumber, NSString, SUScriptDictionary;

@interface SUScriptSubscriptionStatusResponse : SUScriptObject

@property (readonly) NSNumber *acceptedStoreTermsVersion;
@property (readonly) NSString *accountIdentifier;
@property (readonly) NSString *accountStatus;
@property (readonly) NSString *carrierBundlingStatus;
@property (readonly) NSNumber *carrierBundlingErrorCode;
@property (readonly, getter=isDiscoveryModeEligible) id discoveryModeEligible;
@property (readonly) NSString *eligibilityStatus;
@property (readonly, getter=isFamilyOrganizer) id familyOrganizer;
@property (readonly, getter=isFamilySubscription) id familySubscription;
@property (readonly, getter=isFinal) id final;
@property (readonly) id hasFamily;
@property (readonly) id hasFamilyMembers;
@property (readonly) NSNumber *latestStoreTermsVersion;
@property (readonly) SUScriptDictionary *rawResponseData;
@property (readonly) NSString *sessionIdentifier;
@property (readonly, getter=isSubscribed) id subscribed;
@property (readonly) NSString *accountStatusNeedsAuthentication;
@property (readonly) NSString *accountStatusNotSubscribed;
@property (readonly) NSString *accountStatusSubscribed;
@property (readonly) NSString *accountStatusUnknown;
@property (readonly) NSString *eligibilityStatusEligible;
@property (readonly) NSString *eligibilityStatusNotEligible;
@property (readonly) NSString *eligibilityStatusUnknown;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithSubscriptionStatus:(id)a0 isFinal:(BOOL)a1;

@end
