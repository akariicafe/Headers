@class NSString;

@interface AKAppleIDPasskeyCredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSString *attestationDataString;
@property (copy, nonatomic) NSString *clientDataString;
@property (copy, nonatomic) NSString *credentialIDString;
@property (copy, nonatomic) NSString *userIDString;
@property (copy, nonatomic) NSString *originalChallengeString;
@property (copy, nonatomic) NSString *credentialName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRelyingPartyIdentifier:(id)a0 attestationData:(id)a1 clientData:(id)a2 credentialID:(id)a3 originalChallenge:(id)a4 userID:(id)a5 credentialName:(id)a6;
- (id)initWithRelyingPartyIdentifier:(id)a0 attestationDataString:(id)a1 clientDataString:(id)a2 credentialIDString:(id)a3 userIDString:(id)a4 originalChallengeString:(id)a5 credentialName:(id)a6;

@end
