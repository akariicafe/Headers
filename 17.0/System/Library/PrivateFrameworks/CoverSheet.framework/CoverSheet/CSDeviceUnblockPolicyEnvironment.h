@interface CSDeviceUnblockPolicyEnvironment : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isUserRequestedEraseEnabled;
@property (readonly, nonatomic) BOOL isUserFindMyAccountPresent;
@property (readonly, nonatomic) BOOL isDeviceInternetConnectionActive;
@property (readonly, nonatomic) BOOL isPasscodeGracePeriodUsable;

- (id)initWithBuilder:(id /* block */)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
