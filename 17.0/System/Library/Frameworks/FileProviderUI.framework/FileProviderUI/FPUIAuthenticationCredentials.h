@class NSString;

@interface FPUIAuthenticationCredentials : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;

- (void).cxx_destruct;

@end
