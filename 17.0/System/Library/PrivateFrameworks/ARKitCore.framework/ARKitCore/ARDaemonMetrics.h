@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ARDaemonMetrics : NSObject {
    unsigned long long _peakMemoryUsageInMegabytes;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSMutableDictionary *_activeServiceCountPerClient;
    NSMutableDictionary *_allServicesUsedPerClient;
}

+ (id)sharedDaemonMetrics;

- (id)init;
- (void).cxx_destruct;
- (id)_getActiveServiceCountPerClient;
- (void)setCurrentMemoryFootprintAsPeak;
- (void)_addServiceForClient:(id)a0 serviceName:(id)a1;
- (id)_getAllServicesUsedPerClient;
- (unsigned long long)_getPeakMemoryUsageInMegabytes;
- (BOOL)_removeServiceForClient:(id)a0 serviceName:(id)a1;
- (id)_reportCoreAnalyticsDaemonEventWithServiceName:(id)a0 clientBundleIdentifier:(id)a1 isServiceRemoved:(BOOL)a2 isDisconnectingClient:(BOOL)a3;
- (id)_reportDaemonHeartbeatForSessionUUID:(id)a0 daemonUpTimeExcludingSleepMinutes:(unsigned long long)a1 daemonUpTimeIncludingSleepMinutes:(unsigned long long)a2 systemUpTimeMinutes:(unsigned long long)a3 memoryFootprintInBytes:(unsigned long long)a4;
- (void)reportCoreAnalyticsDaemonEventWithServiceName:(id)a0 clientBundleIdentifier:(id)a1 isServiceRemoved:(BOOL)a2 isDisconnectingClient:(BOOL)a3;
- (void)reportDaemonHeartbeatForSessionUUID:(id)a0 daemonUpTimeExcludingSleepMinutes:(unsigned long long)a1 daemonUpTimeIncludingSleepMinutes:(unsigned long long)a2 systemUpTimeMinutes:(unsigned long long)a3 memoryFootprintInBytes:(unsigned long long)a4;
- (void)reportMemoryFootprintInBytes:(unsigned long long)a0;
- (void)reportServiceAddedWithName:(id)a0 clientBundleIdentifier:(id)a1;
- (void)reportServiceRemovedWithName:(id)a0 clientBundleIdentifier:(id)a1;

@end
