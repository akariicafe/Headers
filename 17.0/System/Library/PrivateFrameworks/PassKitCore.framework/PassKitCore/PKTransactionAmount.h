@class NSString, PKCurrencyAmount;

@interface PKTransactionAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic, getter=isPending) BOOL pending;
@property (copy, nonatomic) NSString *unitIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCurrencyAmount:(id)a0;
- (id)initWithCurrencyAmount:(id)a0 label:(id)a1;
- (id)initWithCurrencyAmount:(id)a0 label:(id)a1 unitIdentifier:(id)a2;
- (id)initWithPendingCurrencyAmount:(id)a0 unitIdentifier:(id)a1;

@end
