@protocol PLABMClientMessageDelegate;

@interface PLABMClient : NSObject {
    struct dispatch_queue_s { } *_queue;
    struct shared_ptr<abm::client::Manager> { struct Manager *__ptr_; struct __shared_weak_count *__cntrl_; } abmPLClnt;
}

@property (retain) id<PLABMClientMessageDelegate> delegate;

+ (id)sharedABMClient;

- (id)init;
- (void)addICEDeviceConfigDebug;
- (void)regTriggerListener;
- (void)addMavDeviceConfigDebug;
- (id)getBasebandBootState;
- (void)addMavDeviceConfig;
- (void)regMetricListener;
- (id).cxx_construct;
- (void)removeDeviceConfig;
- (void)sendMetricToLoggerUsing:(id)a0;
- (void)startListening;
- (id)getLTESleepManagerStats;
- (id)getBasebandTimeAndLatency;
- (void)triggerPeriodicMetrics:(int)a0;
- (void)addDeviceConfigWith:(id)a0;
- (void).cxx_destruct;
- (void)addICEDeviceConfig;
- (void)regBootStateListener;
- (void)sendBootStateChangInfoToLoggerUsing:(id)a0;
- (void)sendTriggerToLoggerUsing:(id)a0;
- (void)regBBWakeListener;
- (void)sendWakeInfoToLoggerUsing:(id)a0;

@end
