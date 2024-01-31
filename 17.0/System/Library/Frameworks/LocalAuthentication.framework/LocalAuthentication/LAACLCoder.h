@class NSMutableDictionary;

@interface LAACLCoder : NSObject {
    long long _authType;
    long long _fallbackAuthType;
    NSMutableDictionary *_constraints;
    NSMutableDictionary *_credentials;
}

- (id)init;
- (void).cxx_destruct;
- (void)addConstraint:(id)a0;
- (void)setAuthenticationType:(long long)a0;
- (id)encode;
- (void)addCredential:(id)a0 credentialType:(long long)a1;
- (void)setFallbackAuthenticationType:(long long)a0;

@end
