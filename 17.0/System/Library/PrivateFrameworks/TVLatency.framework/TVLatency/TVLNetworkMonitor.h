@class NSNetServiceBrowser, NSString, TVLNetworkInterface, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface TVLNetworkMonitor : NSObject <NSNetServiceBrowserDelegate>

@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) unsigned long long monitoringOptions;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain, nonatomic) NSNetServiceBrowser *awdlServiceBrowser;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *awdl_monitor;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *wifi_monitor;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *ethernet_monitor;
@property (retain, nonatomic) TVLNetworkInterface *awdl;
@property (retain, nonatomic) TVLNetworkInterface *wifi;
@property (retain, nonatomic) TVLNetworkInterface *ethernet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMonitoring;
- (id)init;
- (void)dealloc;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (void)startMonitoringForInterfaceTypes:(unsigned long long)a0 updateHandler:(id /* block */)a1;

@end
