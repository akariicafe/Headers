@class PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification;
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder;
@property (retain) PLXPCResponderOperatorComposition *powerHUDResponder;

+ (void)load;

- (id)init;
- (void)initOperatorDependancies;
- (id)handleSysdiagnoseCallback:(id)a0;
- (id)handlePowerHUDCallback:(id)a0;
- (void)performLogging:(id)a0;
- (void).cxx_destruct;
- (void)handleSMCCallback:(id)a0;

@end
