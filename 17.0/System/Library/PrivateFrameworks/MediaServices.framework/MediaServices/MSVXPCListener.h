@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (void)dealloc;
- (void)suspend;
- (void)invalidate;
- (void)activate;
- (void)resume;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithMachServiceName:(id)a0;
- (id)localProxy;

@end
