@class NSString;

@interface PKPeerPaymentRecurringPaymentFundingSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic, setter=setFPANIdentifier:) NSString *fpanIdentifier;
@property (copy, nonatomic, setter=setMPANIdentifier:) NSString *mpanIdentifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long network;
@property (copy, nonatomic) NSString *suffix;

+ (id)fundingSourceWithDictionary:(id)a0;
+ (id)fundingSourceWithPass:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPass:(id)a0;

@end
