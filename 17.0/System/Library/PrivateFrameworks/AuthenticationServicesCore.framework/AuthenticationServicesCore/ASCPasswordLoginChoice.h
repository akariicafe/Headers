@class NSString, SFCredentialIdentity;

@interface ASCPasswordLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *site;
@property (readonly, copy, nonatomic) NSString *customTitle;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) SFCredentialIdentity *externalCredentialIdentity;
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) BOOL isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUsername:(id)a0 site:(id)a1 externalCredentialIdentity:(id)a2 customTitle:(id)a3 groupName:(id)a4;

@end
