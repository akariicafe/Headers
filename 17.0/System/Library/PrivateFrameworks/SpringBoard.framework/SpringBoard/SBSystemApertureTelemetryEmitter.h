@interface SBSystemApertureTelemetryEmitter : NSObject

+ (void)_emitCoreAnalyticsTelemetryIfNecessaryWithUpdatedContext:(id)a0 previousContext:(id)a1;
+ (void)_emitPowerLogIfNecessaryWithUpdatedContext:(id)a0 previousContext:(id)a1;
+ (void)logTelemetryForInteractionLongPress:(BOOL)a0 clientIdentifier:(id)a1 elementIdentifier:(id)a2;
+ (void)logTelemetryForInteractionPanGesture:(long long)a0 handled:(BOOL)a1 clientIdentifier:(id)a2 elementIdentifier:(id)a3;
+ (void)logTelemetryForInteractionTap:(BOOL)a0 clientIdentifier:(id)a1 elementIdentifier:(id)a2;
+ (void)logTelemetryForUpdatedContext:(id)a0;
+ (id)stringBySanitizingNil:(id)a0;

@end
