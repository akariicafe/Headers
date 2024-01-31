@class NSDecimalNumber, NSString, NSDictionary, NSTimeZone, NSDate, CLLocation;

@interface FHTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long transactionInternalState;
@property (nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSDictionary *compoundFeatures;
@property (nonatomic) long long amountFromDatabase;
@property (nonatomic) unsigned long long suggestedSuggestionCategory;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSDate *transactionStatusChangedDate;
@property (nonatomic) long long transactionStatus;
@property (nonatomic) unsigned long long transactionSource;
@property (nonatomic) long long transactionType;
@property (nonatomic) long long accountType;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *merchantUniqueIdentifier;
@property (nonatomic) unsigned long long mapsMerchantID;
@property (nonatomic) int mapsMerchantResultProviderID;
@property (nonatomic) unsigned long long mapsMerchantBrandID;
@property (nonatomic) int mapsMerchantBrandResultProviderID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rawName;
@property (nonatomic) long long industryCode;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *zip;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *merchantDetailedCategory;
@property (nonatomic) long long category;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) unsigned long long disputeType;
@property (nonatomic) unsigned long long disputeStatus;
@property (copy, nonatomic) NSDate *disputeOpenDate;
@property (copy, nonatomic) NSDate *disputeLastUpdatedDate;
@property (copy, nonatomic) NSString *peerPaymentCounterpartHandle;
@property (nonatomic) long long peerPaymentType;
@property (copy, nonatomic) NSString *peerPaymentMemo;
@property (nonatomic) BOOL recurring;

+ (long long)FHMerchantCategoryFromString:(id)a0;
+ (id)_allowedCountryCodesForMapsMerchant;
+ (id)fhProperties;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithJsonString:(id)a0;
- (id)toJson:(id)a0;
- (id)initWithDictionary:(id)a0 dateFormatter:(id)a1;

@end
