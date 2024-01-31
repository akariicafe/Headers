@class NSString, NSDecimalNumber, NSDate;

@interface PKAppleBalancePromotionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long promotionType;
@property (copy, nonatomic) NSString *programIdentifier;
@property (copy, nonatomic) NSString *versionIdentifier;
@property (nonatomic) long long generationIdentifier;
@property (nonatomic) long long stamp;
@property (copy, nonatomic) NSDecimalNumber *bonusMinAmount;
@property (copy, nonatomic) NSDecimalNumber *bonusMaxAmount;
@property (copy, nonatomic) NSString *offerText;
@property (copy, nonatomic) NSString *conditionText;
@property (copy, nonatomic) NSDate *lastUpdatedDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAMSOfferDictionary:(id)a0;

@end
