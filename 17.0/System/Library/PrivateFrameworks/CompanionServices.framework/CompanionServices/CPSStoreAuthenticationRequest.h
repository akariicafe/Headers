@class AMSDelegateAuthenticateRequest, ACAccount, NSString;

@interface CPSStoreAuthenticationRequest : CPSAuthenticationRequest <NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegateAuthenticateRequest *authenticationRequest;
@property (retain, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (long long)authType;
- (id)initWithCoder:(id)a0;

@end
