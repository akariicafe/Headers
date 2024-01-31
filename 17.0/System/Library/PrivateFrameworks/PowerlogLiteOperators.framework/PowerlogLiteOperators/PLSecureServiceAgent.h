@class PLXPCListenerOperatorComposition, PLTimer, NSString;

@interface PLSecureServiceAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *daemonLaunchListener;
@property (retain) PLXPCListenerOperatorComposition *connectionListener;
@property (retain) PLXPCListenerOperatorComposition *disconnectionListener;
@property (retain) PLXPCListenerOperatorComposition *deviceIntentListener;
@property (retain) PLXPCListenerOperatorComposition *periodicReportListener;
@property (retain) PLTimer *entriesPerHourTimer;
@property long long numBTConn;
@property long long periodicReportCount;
@property long long prevActiveKeys;
@property long long numEntries;
@property long long previousEvent;
@property (retain) NSString *previousHash;

+ (id)defaults;
+ (void)load;
+ (id)entryEventPointDefinitionConnectionState;
+ (BOOL)isSecureServiceSupported;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSummary;

- (void)logEventPointPeriodicReport:(id)a0;
- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointConnectionState:(id)a0 withEvent:(long long)a1;
- (void).cxx_destruct;

@end
