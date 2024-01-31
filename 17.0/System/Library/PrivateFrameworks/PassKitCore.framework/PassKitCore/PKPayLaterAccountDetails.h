@class PKPayLaterAccountTermsDetails, NSString, NSArray, NSURL, NSDate, NSSet, PKCurrencyAmount, PKPayLaterAccountUserInfo;

@interface PKPayLaterAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSURL *associatedPassURL;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (nonatomic) long long cardNetwork;
@property (nonatomic) unsigned long long paymentType;
@property (nonatomic) long long financingPlanFetchLimit;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) PKCurrencyAmount *amountPaid;
@property (copy, nonatomic) PKCurrencyAmount *totalFinanced;
@property (copy, nonatomic) NSDate *nextDueDate;
@property (copy, nonatomic) PKCurrencyAmount *nextDueAmount;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *availableLanguages;
@property (nonatomic) BOOL requiresGenericMessaging;
@property (copy, nonatomic) NSSet *products;
@property (retain, nonatomic) PKPayLaterAccountTermsDetails *termsDetails;
@property (retain, nonatomic) PKPayLaterAccountUserInfo *userInfo;

- (unsigned long long)hash;
- (id)currencyCode;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasEligibleSpend;
- (BOOL)hasProvisionedPass;
- (BOOL)isPayLaterSupportedInCurrentRegion;
- (id)localizationBundleWithMainBundle:(id)a0;
- (id)maximumEligibleSpendAmount;
- (id)maximumSinglePurchaseAmount;
- (id)minimumSinglePurchaseAmount;
- (id)odiAttributes;
- (id)perferredLanguageWithMainBundle:(id)a0;
- (id)productForProductType:(unsigned long long)a0;

@end
