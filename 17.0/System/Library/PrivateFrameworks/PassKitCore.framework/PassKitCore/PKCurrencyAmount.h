@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long exponent;
@property (copy, nonatomic) NSString *preformattedString;

+ (id)maximumCurrencyAmount:(id)a0 otherCurrencyAmount:(id)a1;
+ (id)minimumCurrencyAmount:(id)a0 otherCurrencyAmount:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedStringValue;
- (id)absoluteValue;
- (id)amountByConvertingToSmallestCommonCurrencyUnit;
- (long long)compareToCurrencyCode:(id)a0 amount:(id)a1;
- (id)currencyAmountByAddingCurrencyAmount:(id)a0;
- (id)currencyAmountBySubtractingCurrencyAmount:(id)a0;
- (BOOL)currencyAmountEqualToCurrencyAmount:(id)a0;
- (BOOL)currencyAmountGreaterThanCurrencyAmount:(id)a0;
- (BOOL)currencyAmountLessThanCurrencyAmount:(id)a0;
- (id)initWithAmount:(id)a0 currency:(id)a1;
- (id)initWithAmount:(id)a0 currency:(id)a1 exponent:(long long)a2;
- (id)initWithAmount:(id)a0 exponent:(long long)a1 preformattedString:(id)a2;
- (BOOL)isCurrency;
- (BOOL)isEqualToCurrencyAmount:(id)a0;
- (id)minimalFormattedStringValue;
- (id)minimalFormattedStringValueInLocale:(id)a0;
- (id)negativeValue;

@end
