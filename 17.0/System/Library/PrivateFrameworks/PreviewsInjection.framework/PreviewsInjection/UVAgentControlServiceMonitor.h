@class NSString, _TtC17PreviewsInjection14UVControlAgent, BSServiceConnectionEndpointMonitor;

@interface UVAgentControlServiceMonitor : NSObject <BSServiceConnectionEndpointMonitorDelegate> {
    BSServiceConnectionEndpointMonitor *_endpointMonitor;
    _TtC17PreviewsInjection14UVControlAgent *_agent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)sharedInstance;

- (id)init;
- (void)activate;
- (void)monitor:(id)a0 didReceiveEndpoint:(id)a1;
- (void)monitor:(id)a0 willLoseEndpoint:(id)a1;
- (void).cxx_destruct;

@end
