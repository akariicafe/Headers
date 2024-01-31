@class APUIAirPlaySetupConfigurationWiFi, APUIAirPlaySetupConfigurationDiscoveryBroker, APUIAirPlaySetupConfigurationReceiver;

@interface APUIAirPlaySetupConfiguration : NSObject

@property (copy, nonatomic) APUIAirPlaySetupConfigurationWiFi *wifi;
@property (copy, nonatomic) APUIAirPlaySetupConfigurationDiscoveryBroker *broker;
@property (copy, nonatomic) APUIAirPlaySetupConfigurationReceiver *receiver;

- (id)urlString;
- (id)description;
- (void).cxx_destruct;

@end
