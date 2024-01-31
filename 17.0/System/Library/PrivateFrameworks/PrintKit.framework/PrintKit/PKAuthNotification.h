@class NSString, NSURLCredential;

@interface PKAuthNotification : PKNotification

@property (retain) NSString *usernameField;
@property (retain) NSString *passwordField;
@property (retain) NSString *defaultUsername;
@property (readonly) NSURLCredential *credential;

- (void).cxx_destruct;
- (void)_interpretResult:(unsigned long long)a0 responseDict:(id)a1;
- (id)_makeDict;
- (unsigned long long)_makeFlags;

@end
