@class NSString;

@interface AKFidoRegistrationResponse : NSObject <AKFidoResponse, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *attestationsData;
@property (readonly, nonatomic) NSString *credentialName;
@property (readonly, nonatomic) NSString *clientData;
@property (readonly, nonatomic) NSString *credentialID;
@property (readonly, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSString *challenge;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;

+ (id)_sanitizeCredentialIDString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChallengeString:(id)a0 attestationsData:(id)a1 credentialID:(id)a2 clientData:(id)a3 relyingPartyIdentifier:(id)a4 credentialName:(id)a5 userIdentifier:(id)a6;
- (id)initWithChallengeString:(id)a0 attestationsDataString:(id)a1 credentialIDString:(id)a2 clientDataString:(id)a3 relyingPartyIdentifier:(id)a4 credentialName:(id)a5 userIdentifier:(id)a6;

@end
