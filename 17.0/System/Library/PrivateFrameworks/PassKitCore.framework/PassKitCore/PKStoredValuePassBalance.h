@class NSString, NSDecimalNumber, NSDate;

@interface PKStoredValuePassBalance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *identifier;
@property (readonly, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSString *balanceType;
@property (readonly, nonatomic) NSDate *expiryDate;

- (unsigned long long)hash;
- (BOOL)isExpired;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrencyAmount:(id)a0;
- (id)initWithIdentifier:(id)a0 amount:(id)a1 balanceType:(id)a2 expiryDate:(id)a3;
- (id)initWithIdentifier:(id)a0 cashAmount:(id)a1 currencyCode:(id)a2 expiryDate:(id)a3;
- (id)initWithTransitAppletBalance:(id)a0 balanceField:(id)a1;
- (BOOL)isCurrencyBalance;
- (BOOL)isEqualToBalance:(id)a0;

@end
