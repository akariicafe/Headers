@class NSString, NSDecimalNumber, NSDate;

@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long exponent;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isCurrency;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setIdentifierFromObject:(id)a0;
- (id)initWithIdentifier:(id)a0 balance:(id)a1 currency:(id)a2 exponent:(long long)a3 expirationDate:(id)a4;
- (BOOL)isEqualToBalance:(id)a0;

@end
