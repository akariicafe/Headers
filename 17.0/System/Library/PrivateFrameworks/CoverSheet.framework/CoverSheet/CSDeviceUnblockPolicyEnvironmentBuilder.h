@class NSString;

@interface CSDeviceUnblockPolicyEnvironmentBuilder : NSObject <CSDeviceUnblockPolicyEnvironmentBuilder>

@property (nonatomic) BOOL isUserRequestedEraseEnabled;
@property (nonatomic) BOOL isUserFindMyAccountPresent;
@property (nonatomic) BOOL isDeviceInternetConnectionActive;
@property (nonatomic) BOOL isPasscodeGracePeriodUsable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
