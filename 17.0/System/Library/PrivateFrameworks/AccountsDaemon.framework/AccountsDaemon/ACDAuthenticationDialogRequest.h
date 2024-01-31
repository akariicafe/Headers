@class NSURL, ACAccount, NSString;

@interface ACDAuthenticationDialogRequest : NSObject

@property (copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL confirmationRequired;
@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authDelegateClassName;
@property (copy, nonatomic) NSString *authDelegateClassBundlePath;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
