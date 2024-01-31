@class NSString;

@interface APUIAirPlaySetupConfigurationReceiver : NSObject

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *authString;
@property (nonatomic) BOOL routeToReceiverAfterSetup;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
