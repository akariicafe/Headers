@class NSDate, NSString, NSArray, SAMLSignature, SAMLConditions, SAMLAdvice, SAMLSubject, SAMLAuthNStatement;

@interface SAMLAssertion : SAMLBaseElement

@property (readonly, nonatomic) NSDate *issueInstant;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *samlAttributes;
@property (readonly, nonatomic) SAMLAuthNStatement *authentication;
@property (readonly, nonatomic) NSArray *authorizations;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (readonly, nonatomic) SAMLSubject *subject;
@property (readonly, nonatomic) SAMLConditions *conditions;
@property (readonly, nonatomic) SAMLAdvice *advice;

+ (id)createElement:(id *)a0;

- (BOOL)isValid:(id *)a0;
- (id)authorizationForResource:(id)a0;
- (BOOL)isValidForRequestor:(id)a0;
- (BOOL)meetsConditions:(id *)a0;

@end
