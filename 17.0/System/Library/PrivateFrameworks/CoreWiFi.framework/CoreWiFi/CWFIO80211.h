@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFIO80211 : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct IONotificationPort { } *_portRef;
    struct IONotificationPort { } *_portRefVirtual;
    unsigned int _publishIO80211SkywalkInterface;
    unsigned int _terminatedIO80211SkywalkInterface;
    unsigned int _publishIO80211VirtualInterface;
    unsigned int _terminatedIO80211VirtualInterface;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)startEventMonitoring;
- (id)init;
- (id)IO80211InterfaceInfo:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (id)__IO80211InfoMatchingService:(unsigned int)a0;
- (void).cxx_destruct;
- (id)IO80211ControllerInfo;

@end
