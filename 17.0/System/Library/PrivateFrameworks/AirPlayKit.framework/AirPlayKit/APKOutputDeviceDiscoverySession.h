@class NSArray, AVOutputDeviceDiscoverySession;

@interface APKOutputDeviceDiscoverySession : NSObject

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session;
@property (readonly, nonatomic) NSArray *availableOutputDevices;

- (id)init;
- (void)dealloc;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;

@end
