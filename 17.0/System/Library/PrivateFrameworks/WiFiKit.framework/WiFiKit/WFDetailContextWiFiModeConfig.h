@interface WFDetailContextWiFiModeConfig : NSObject

@property (nonatomic, getter=isWifiModeConfigurable) BOOL wifiModeConfigurable;
@property (nonatomic) long long wifiMode;

- (id)initWithConfigurable:(BOOL)a0 wifiMode:(long long)a1;

@end
