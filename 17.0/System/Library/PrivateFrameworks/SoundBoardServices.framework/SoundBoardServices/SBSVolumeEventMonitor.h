@class NSXPCConnection;
@protocol SBSVolumeEventMonitorImplementer;

@interface SBSVolumeEventMonitor : NSObject

@property (retain) NSXPCConnection *sbConnection;
@property (readonly) id<SBSVolumeEventMonitorImplementer> sbProxy;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)fetchLatestEvents:(long long)a0 completionHandler:(id /* block */)a1;

@end
