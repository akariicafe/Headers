@class NSString, PKTransactionAmount, NSDate;

@interface PKPaymentTransactionAward : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *subtype;
@property (nonatomic) long long order;
@property (copy, nonatomic) PKTransactionAmount *amount;
@property (copy, nonatomic) NSString *localizedAmount;
@property (copy, nonatomic) NSString *awardDescription;
@property (copy, nonatomic) NSString *relevantAccountName;
@property (nonatomic) BOOL hasDeepLink;
@property (copy, nonatomic) NSDate *claimExpiryDate;
@property (nonatomic) BOOL claimExpired;
@property (copy, nonatomic) NSDate *redeemExpiryDate;
@property (nonatomic) BOOL redeemExpired;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedStringValue;
- (BOOL)isEqualToPaymentTransactionAward:(id)a0;

@end
