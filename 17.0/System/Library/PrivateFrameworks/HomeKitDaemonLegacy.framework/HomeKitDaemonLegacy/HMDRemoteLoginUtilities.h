@class NSString, ACAccount;

@interface HMDRemoteLoginUtilities : NSObject <HMFLogging>

@property (class, readonly) ACAccount *primaryITunesAccount;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)fetchIsTwoFactorAuthenticationEnabledForAccountWithReason:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isTwoFactorAuthenticationEnabledForAccount;
+ (long long)serviceTypeForAccountService:(unsigned long long)a0;


@end
