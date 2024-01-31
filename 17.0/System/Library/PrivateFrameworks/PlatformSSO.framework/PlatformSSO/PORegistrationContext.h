@class NSString, LAContext, POExtension, POProfile;

@interface PORegistrationContext : NSObject

@property (getter=isRepair) BOOL repair;
@property (getter=isNewUser) BOOL newUser;
@property BOOL userNotified;
@property BOOL resetKeys;
@property (getter=isRetry) BOOL retry;
@property int failureCount;
@property long long state;
@property int authMethod;
@property long long options;
@property (retain) NSString *extensionIdentifier;
@property (retain) NSString *containerAppBundleIdentifier;
@property (retain) NSString *registrationToken;
@property BOOL useSharedDeviceKeys;
@property BOOL deviceKeysShouldChange;
@property BOOL migratingDeviceKeys;
@property (retain) NSString *loginUserName;
@property (retain) NSString *userName;
@property (retain) LAContext *credentialContext;
@property BOOL authorizationProvided;
@property (retain) NSString *smartCardTokenId;
@property (retain) POExtension *ssoExtension;
@property long long protocolVersion;
@property (retain) POProfile *profile;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUserNotification;

@end
