@class WFLinkQuality;

@interface WFMobileWiFiStateMonitor : NSObject

@property (nonatomic) long long state;
@property (nonatomic) struct __WiFiManagerClient { } *manager;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (retain, nonatomic) WFLinkQuality *linkQuality;
@property (copy) id /* block */ handler;

- (void)stopMonitoring;
- (void)dealloc;
- (void)_updateState;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient { } *)a0;

@end
