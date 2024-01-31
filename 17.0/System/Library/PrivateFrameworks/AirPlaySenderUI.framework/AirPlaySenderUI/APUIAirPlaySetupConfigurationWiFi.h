@class NSString;

@interface APUIAirPlaySetupConfigurationWiFi : NSObject

@property (copy, nonatomic) NSString *SSID;
@property (copy, nonatomic) NSString *passphrase;
@property (copy, nonatomic) NSString *captivePortalBypassToken;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
