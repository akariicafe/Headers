@interface AKCATiburonInputUIReporter : AKCAReporter

- (id)initWithRequestID:(id)a0;
- (void)didShowAppleID:(BOOL)a0;
- (void)_clearMutuallyExclusiveProperties:(BOOL)a0;
- (void)didComplete:(BOOL)a0;
- (void)didModifyName:(BOOL)a0;
- (void)didSelectAnonymousEmail:(BOOL)a0;
- (void)didSelectAppleID:(BOOL)a0;
- (void)didSelectPasswordCredential:(BOOL)a0;
- (void)setPasswordCredentialCount:(unsigned long long)a0;

@end
