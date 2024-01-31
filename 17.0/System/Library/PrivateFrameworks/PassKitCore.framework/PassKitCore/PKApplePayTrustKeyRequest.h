@class NSString, NSData;

@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSData *subjectIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyIdentifier:(id)a0 subjectIdentifier:(id)a1;

@end
