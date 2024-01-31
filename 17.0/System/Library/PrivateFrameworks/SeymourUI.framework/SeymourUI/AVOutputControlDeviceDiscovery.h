@class AVOutputDeviceDiscoverySession;

@interface AVOutputControlDeviceDiscovery : NSObject

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session;

- (id)init;
- (void)dealloc;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;
- (BOOL)supportsFitnessDataDestinationForDeviceIdentifier:(id)a0;

@end
