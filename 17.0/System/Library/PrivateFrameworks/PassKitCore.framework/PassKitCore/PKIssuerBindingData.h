@class NSString, NSData, NSURL;

@interface PKIssuerBindingData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSData *createdKeyHash;
@property (copy, nonatomic) NSData *signedData;
@property (copy, nonatomic) NSURL *callbackURL;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToIssuerBindingData:(id)a0;

@end
