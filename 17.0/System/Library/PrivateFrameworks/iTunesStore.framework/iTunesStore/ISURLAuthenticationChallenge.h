@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge

+ (id)_messageForProtectionSpace:(id)a0;
+ (id)_titleForProtectionSpace:(id)a0;

- (id)user;
- (id)sender;
- (long long)failureCount;
- (id)password;
- (BOOL)hasPassword;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
