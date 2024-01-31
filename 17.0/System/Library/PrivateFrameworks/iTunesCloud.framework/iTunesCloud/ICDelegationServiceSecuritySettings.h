@class NSString;

@interface ICDelegationServiceSecuritySettings : NSObject

@property (readonly, nonatomic) long long securityMode;
@property (readonly, copy, nonatomic) NSString *password;

+ (void)getDeviceSenderSettingsForReceiverName:(id)a0 securityMode:(long long)a1 completion:(id /* block */)a2;
+ (void)getDeviceReceiverSettingsWithCompletion:(id /* block */)a0;

- (id)_init;
- (id)description;
- (void).cxx_destruct;

@end
