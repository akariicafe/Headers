@class SAMLResponseElement, NSDictionary, NSString;

@interface SAMLResponse : XMLWrapperDoc

@property (retain, nonatomic) SAMLResponseElement *responseElement;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *selectedProvider;

- (id)userName;
- (id)subject;
- (BOOL)isValid:(id *)a0;
- (id)assertions;
- (id)statusCodes;
- (void).cxx_destruct;
- (id)authenticationTTL;
- (BOOL)hasValidAuthentication;
- (void)setAuthenticationTTL:(id)a0;
- (id)authorizationStatusForResource:(id)a0;
- (BOOL)assertionMeetsConditions:(id *)a0;
- (id)attributeValuesForName:(id)a0;
- (id)authenticationSessionId;
- (long long)expectedAction;
- (id)initWithData:(id)a0 schema:(id)a1 error:(id *)a2;
- (id)primaryStatusCode;

@end
