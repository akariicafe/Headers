@class NSString, NSDecimalNumber;

@interface PKPaymentTokenContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantDomain;
@property (copy, nonatomic) NSDecimalNumber *amount;

+ (long long)version;
+ (id)contextWithProtobuf:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)protobuf;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMerchantIdentifier:(id)a0 externalIdentifier:(id)a1 merchantName:(id)a2 merchantDomain:(id)a3 amount:(id)a4;
- (BOOL)isEqualToPaymentTokenContext:(id)a0;

@end
