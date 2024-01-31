@class NSDecimalNumber, NSString;

@interface INBalanceAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) long long balanceType;
@property (readonly, copy, nonatomic) NSString *currencyCode;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAmount:(id)a0 balanceType:(long long)a1;
- (id)initWithAmount:(id)a0 balanceType:(long long)a1 currencyCode:(id)a2;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1;

@end
