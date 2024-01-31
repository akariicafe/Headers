@class NSString, NSDictionary, NSDate;

@interface PKPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_additionalProvisioningDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long appleIdentifierType;
@property (copy, nonatomic) NSString *appleIdentifier;
@property (readonly, copy, nonatomic) NSString *provisioningCredentialIdentifier;
@property (readonly, copy, nonatomic) NSString *cardConfigurationIdentifier;
@property (copy, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *accountHash;
@property (readonly, nonatomic) NSString *templateIdentifier;
@property (retain, nonatomic) NSString *relyingPartyIdentifier;
@property (nonatomic) BOOL requiresSimultaneousRequestRouting;
@property (retain, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSString *nonce;
@property (nonatomic) unsigned long long targetDevice;
@property (retain, nonatomic) NSString *environmentIdentifier;
@property (retain, nonatomic) NSString *secondarySource;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppleIdentifier:(id)a0 appleIdentifierType:(long long)a1 provisioningCredentialIdentifier:(id)a2 cardConfigurationIdentifier:(id)a3 sharingInstanceIdentifier:(id)a4 nonce:(id)a5;
- (id)initWithAppleIdentifier:(id)a0 appleIdentifierType:(long long)a1 provisioningCredentialIdentifier:(id)a2 cardConfigurationIdentifier:(id)a3 sharingInstanceIdentifier:(id)a4 nonce:(id)a5 accountHash:(id)a6 templateIdentifier:(id)a7 relyingPartyIdentifier:(id)a8 requiresSimultaneousRequestRouting:(BOOL)a9 targetDevice:(unsigned long long)a10 environmentIdentifier:(id)a11;
- (id)initWithProvisioningDict:(id)a0;
- (BOOL)isEqualToProvisioningTarget:(id)a0;

@end
