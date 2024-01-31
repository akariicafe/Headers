@class NSString;

@interface IMAKAppleIDAuthenticationController : NSObject

@property (class, readonly, copy) NSString *IMAKUserInfoChangedNotification;
@property (class, readonly, copy) NSString *IMAKUserInfoChangedAltDSIDKey;
@property (class, readonly, copy) NSString *IMAKUserInfoChangedSecurityLevelKey;

@end
