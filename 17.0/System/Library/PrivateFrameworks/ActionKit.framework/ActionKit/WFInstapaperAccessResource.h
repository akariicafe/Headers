@class NSString;

@interface WFInstapaperAccessResource : WFAccessResource

@property (class, copy, nonatomic) NSString *instapaperUsername;
@property (class, copy, nonatomic) NSString *instapaperToken;
@property (class, copy, nonatomic) NSString *instapaperTokenSecret;

+ (id)keychain;
+ (void)initialize;
+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (unsigned long long)status;
- (id)username;
- (id)resourceName;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
