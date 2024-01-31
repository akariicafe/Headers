@class NSString, NSURL;

@interface SBMutableDeviceApplicationScenePlaceholderContentContext : SBDeviceApplicationScenePlaceholderContentContext

@property (nonatomic) BOOL prefersLiveXIB;
@property (nonatomic) BOOL hasOrientationMismatchForClassicApp;
@property (nonatomic) long long sizingPolicy;
@property (nonatomic) long long layoutEnvironment;
@property (nonatomic) unsigned long long preferredContentType;
@property (copy, nonatomic) NSString *requestedLaunchIdentifier;
@property (copy, nonatomic) NSURL *url;

@end
