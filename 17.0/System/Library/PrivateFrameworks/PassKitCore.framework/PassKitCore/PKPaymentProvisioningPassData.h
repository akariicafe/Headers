@class NSURL, PKSecureElementPass, NSString;

@interface PKPaymentProvisioningPassData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKSecureElementPass *secureElementPass;
@property (readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) BOOL suppressMakeDefaultPaymentPassOffer;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSecureElementPass:(id)a0;

@end
