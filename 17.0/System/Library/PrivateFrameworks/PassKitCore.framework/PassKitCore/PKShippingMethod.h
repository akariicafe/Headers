@class NSString, PKDateComponentsRange;

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) PKDateComponentsRange *dateComponentsRange;

+ (long long)version;
+ (id)shippingMethodWithProtobuf:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToShippingMethod:(id)a0;
- (id)shippingMethodProtobuf;

@end
