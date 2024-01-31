@class AKAppleIDSession;

@interface ICAuthenticationUtilities : NSObject

@property (class, readonly, nonatomic) AKAppleIDSession *sharedAuthKitSession;

@end
