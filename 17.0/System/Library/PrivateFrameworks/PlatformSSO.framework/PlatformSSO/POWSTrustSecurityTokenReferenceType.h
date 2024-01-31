@class POWSTrustKeyIdentifierType, NSString;

@interface POWSTrustSecurityTokenReferenceType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustKeyIdentifierType *KeyIdentifier;
@property (copy, nonatomic) NSString *TokenType;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
