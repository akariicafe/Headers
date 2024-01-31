@class NSString, _SFKeySpecifier;

@interface SFIdentityAttributes_Ivars : NSObject {
    NSString *localizedLabel;
    NSString *localizedDescription;
    _SFKeySpecifier *keySpecifier;
    NSString *identityName;
    NSString *privateKeyDomain;
    BOOL hasCertificate;
}

- (void).cxx_destruct;

@end
