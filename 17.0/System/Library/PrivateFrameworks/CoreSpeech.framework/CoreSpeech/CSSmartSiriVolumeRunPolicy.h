@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeRunPolicy : CSPolicy {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)_subscribeEventMonitors;
- (void).cxx_destruct;
- (void)_addSmartSiriVolumeEnabledConditions;

@end
