@class NSString, NSDate;

@interface AMSAccountCachedServerDataFields : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *acAccountName;
@property (nonatomic) unsigned long long accountFlagsVersion;
@property (nonatomic) BOOL autoPlayEnabled;
@property (retain, nonatomic) NSString *creditBalance;
@property (retain, nonatomic) NSString *firstName;
@property (nonatomic) BOOL hasAgreedToAppClipTerms;
@property (nonatomic) BOOL hasAgreedToTerms;
@property (nonatomic) BOOL hasSubscriptionFamilySharingEnabled;
@property (nonatomic) BOOL hasHardwareWatchOffer;
@property (nonatomic) unsigned long long identityLastVerified;
@property (nonatomic) BOOL isDisabledAccount;
@property (nonatomic) BOOL isInBadCredit;
@property (nonatomic) BOOL isInFamily;
@property (nonatomic) BOOL isManagedAccount;
@property (nonatomic) BOOL isRestrictedAccount;
@property (nonatomic) BOOL isInRestrictedRegion;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) BOOL personalization;
@property (nonatomic) BOOL retailDemo;
@property (retain, nonatomic) NSString *storefrontId;
@property (nonatomic) BOOL underThirteen;
@property (nonatomic) unsigned long long verifiedExpirationDate;
@property (retain, nonatomic) NSDate *expiration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
