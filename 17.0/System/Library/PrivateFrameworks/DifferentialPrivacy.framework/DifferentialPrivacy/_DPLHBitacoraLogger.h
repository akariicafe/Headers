@interface _DPLHBitacoraLogger : NSObject

+ (id)bitacoraDprivacydEventWithEventPhase:(int)a0 uuid:(id)a1 succeeded:(BOOL)a2 errorCode:(int)a3 errorMessage:(id)a4;
+ (BOOL)donateEventToBitacoraForKey:(id)a0 eventPhase:(int)a1 uuid:(id)a2 succeeded:(BOOL)a3 errorCode:(int)a4 errorMessage:(id)a5 telemetryAllowed:(BOOL)a6;
+ (id)trialIdentifiersForKey:(id)a0;

@end
