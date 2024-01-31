@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VTPolicy : NSObject <VTEventMonitorDelegate> {
    NSMutableArray *_monitors;
    NSMutableArray *_conditions;
    id /* block */ _callback;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultVoiceTriggerEnablePolicy;

- (void)setCallback:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)addConditions:(id /* block */)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)_checkAllConditionsEnabled;
- (void)subscribeEventMonitor:(id)a0;
- (void)notifyCallback:(BOOL)a0;
- (void)VTEventMonitorDidReceiveEvent:(id)a0;

@end
