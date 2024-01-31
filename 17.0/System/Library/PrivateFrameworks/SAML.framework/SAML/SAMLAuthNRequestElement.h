@class NSDate, NSString, SAMLSignature, SAMLConditions, SAMLNameIdPolicy, SAMLSubject, SAMLScoping, SAMLRequestedAuthNContext;

@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (retain, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *consent;
@property (nonatomic) BOOL forceAuthN;
@property (nonatomic) BOOL isPassive;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSString *issuer;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;
@property (retain, nonatomic) SAMLNameIdPolicy *nameIdPolicy;
@property (retain, nonatomic) SAMLConditions *conditions;
@property (readonly, nonatomic) SAMLRequestedAuthNContext *context;
@property (retain, nonatomic) SAMLScoping *scoping;

+ (id)createElement:(id *)a0;

@end
