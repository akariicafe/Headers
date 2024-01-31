@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SDEventMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *eventHandlers;

+ (id)sharedInstance;

- (id)init;
- (void)unregisterHandler:(id /* block */)a0 forEventName:(id)a1;
- (id)_init;
- (void)_startMonitoringEventsForStream:(unsigned long long)a0;
- (void)startMonitoringEvents;
- (void)registerHandler:(id /* block */)a0 forEventName:(id)a1;
- (void).cxx_destruct;

@end
