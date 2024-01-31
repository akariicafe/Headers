@class HAPAccessoryServerIP;

@interface HAPEasyConfigDevice : EasyConfigDevice

@property (weak, nonatomic) HAPAccessoryServerIP *server;

- (void).cxx_destruct;
- (id)initWithDeviceInfo:(id)a0 server:(id)a1;

@end
