@class NSMutableDictionary, PLEntryNotificationOperatorComposition, TUCallCenter, NSDate, NSObject, PLBasebandLogChannel, NSMutableArray, PLABMClient, PLBBTelephonyActivityMsg, PLCFNotificationOperatorComposition, NSString, PLBBTelephonyRegMsg, PLNSNotificationOperatorComposition, PLXPCResponderOperatorComposition, PLTelephonyConnection, NSNumber, CoreTelephonyClient, PLTimer;
@protocol OS_dispatch_queue;

@interface PLBBAgent : PLAgent <PLBasebandLogChannelDelegate, PLABMClientMessageDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCellularUsagePolicyDelegate> {
    struct IONotificationPort { } *ioNotifyPort;
    unsigned int notificationRef;
    unsigned int baseband_service;
    PLBasebandLogChannel *streamingChannel;
    PLBasebandLogChannel *cachedChannel;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (readonly, nonatomic) PLTelephonyConnection *connection;
@property (retain) PLABMClient *abmClient;
@property (readonly) PLEntryNotificationOperatorComposition *sleepEntryNotifications;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) PLCFNotificationOperatorComposition *cfNotifyBBReport30s;
@property (retain) PLCFNotificationOperatorComposition *cfNotifyBBReport;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (retain) NSDate *lastReportRequestDate;
@property BOOL changed;
@property BOOL agentInited;
@property (retain) NSMutableDictionary *currentCallList;
@property BOOL lteCurrentState;
@property (retain) NSNumber *lastReportedSignal;
@property (retain) NSNumber *inDCH;
@property (retain) NSNumber *inUTBF;
@property (retain) NSString *simStatus;
@property (retain) NSString *operatorName;
@property (retain) PLBBTelephonyRegMsg *telRegMsgHelper;
@property (retain) PLBBTelephonyActivityMsg *telActMsgHelper;
@property (retain) PLNSNotificationOperatorComposition *bbICEModelLTEMetricsNotification;
@property (retain) NSDate *lastBBActivityTimestamp;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLEntryNotificationOperatorComposition *didNotSleepNotification;
@property (retain) PLEntryNotificationOperatorComposition *telephonyActivityNotification;
@property (retain) PLTimer *channelReconnectTimer;
@property (retain) PLTimer *cacheCommitTimer;
@property double lastBBProtoPower;
@property double lastOOSPower;
@property (retain) NSDate *lastModeledOOSTimestamp;
@property double lastGWPower;
@property (retain) NSDate *lastOOSTimestamp;
@property double oosGWPower;
@property double oosCDMAPower;
@property double oosHDRPower;
@property double totalOosGWScanEnergy;
@property double totalOosCDMAScanEnergy;
@property double totalOosHDRScanEnergy;
@property BOOL isBBOOS;
@property BOOL isFirstTimeAccountingOOS;
@property BOOL isBBDataStandard;
@property (retain) NSObject<OS_dispatch_queue> *telephonyClientQueue;
@property (retain) CoreTelephonyClient *telephonyClient;
@property (retain) NSMutableArray *dsdsRegMsgs;
@property (retain) NSMutableArray *dsdsActivityMsgs;
@property (retain) TUCallCenter *callCenter;
@property (retain) PLXPCResponderOperatorComposition *BBLogsSysdiagnoseResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneBBReport;
+ (id)entryEventForwardSDM;
+ (id)indexToRat:(unsigned long long)a0;
+ (id)entryIceMsgLite;
+ (id)humanReadableStateFromKey:(id)a0;
+ (id)getNameBBReport;
+ (id)getBBAgent;

- (void)modelOOSPower:(id)a0;
- (void)telephonyActivityNotificationCB_Agent:(id)a0 withName:(struct __CFString { } *)a1;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (id)setupIOKitNotifications;
- (id)init;
- (void)logTelephonyRegistrationDSDSAtInit;
- (void)scheduleReconnect;
- (void)dealloc;
- (void)modelMavPower:(id)a0;
- (id)humanReadableSimStatusString;
- (BOOL)isEarfcnHighBand:(int)a0;
- (void)cellChanged:(id)a0 cell:(id)a1;
- (void)logTelephonyRegMsgWith:(id)a0;
- (void)channelDidBecomeInvalid:(id)a0;
- (float)translateTransBW:(int)a0;
- (void)log;
- (id)humanReadableRegistrationStatus:(id)a0;
- (void)setupBBChannelsWithAction:(long long)a0;
- (void)initOperatorDependancies;
- (void)setOpName:(id)a0;
- (void)setupMavABMChannel;
- (void)reconnectTimerFired;
- (void)modelLTESLEEPMGRPower:(id)a0;
- (void)createOOSAccountingEvent:(id)a0;
- (void)logMessage:(id)a0 andState:(id)a1;
- (double)translateChannelRBsToChannelBW:(double)a0;
- (void)modelMavBBHWOtherPerRATPower:(id)a0;
- (void)flushBBCacheWithClientInfo:(long long)a0;
- (void)logEntries:(id)a0 withGroupID:(id)a1;
- (void)logTelephonyActivityDSDSAtInit;
- (void)channel:(id)a0 hasDataAvailable:(id)a1;
- (void)refreshBBReport;
- (void)logEventNoneBBReportBy:(long long)a0 withAction:(long long)a1;
- (void)initCacheCommitTimer;
- (void)bootStateChange:(id)a0;
- (void)postCDRXCapability:(BOOL)a0;
- (BOOL)isTimeToRequestReport;
- (void)connectionStateChanged:(id)a0 connection:(int)a1 dataConnectionStatusInfo:(id)a2;
- (void)registerForICEModelMetricsNotifications:(id)a0;
- (void)smartDataModeChanged:(id)a0 userEnabled:(BOOL)a1;
- (void)setupKICEChannels;
- (void)setupKICEChannelsForDebug;
- (void)resetCacheCommitTimer;
- (void)modelBB16Power:(id)a0;
- (void)logEntry:(id)a0;
- (void)commitBBCacheWithClientInfo:(long long)a0;
- (void)metricMessage:(id)a0;
- (void)processTimeUpdateInfoDict:(id)a0;
- (void)refreshRequestHandler;
- (void)setupTelephonyActivityChannels;
- (void)logOperatorName;
- (void)wakeMessage:(id)a0;
- (void)cacheCommitTimerFired;
- (void)logTelephonyActivity;
- (void)logDSDSEventPointTelephonyActivityWithSubsId:(long long)a0 context:(id)a1 callStatus:(id)a2 simStatus:(id)a3 signalInfo:(id)a4 RATselection:(id)a5 andCurrCampedRAT:(id)a6;
- (void)logTelephonyRegistrationAtInit;
- (void)checkKICEChannelTimeout;
- (void)modelMav10BBHWPower:(id)a0;
- (BOOL)isChangedAndSetAirplaneMode;
- (long long)getSubsIdFromCTContext:(id)a0;
- (void)registerForAirplaneModeChange;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (void)modelPLEntry:(id)a0;
- (void)cancelCacheCommitTimer;
- (void).cxx_destruct;
- (void)scheduleFlushPostCacheCommit;
- (id)humanReadableDataIndicator:(id)a0;
- (void)callStatusChanged:(id)a0;
- (void)modelGPSPower:(id)a0;
- (void)loadOOSModelValues;
- (void)logBasebandConfig;
- (void)logDSDSEventForwardTelephonyRegistrationWithKVPairs:(id)a0 subsId:(long long)a1 andOperator:(id)a2;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (BOOL)setupChannel:(id)a0 withLogCodes:(id)a1 andEvents:(id)a2 andExtracode:(id)a3;
- (void)setupTimeUpdateChannel;
- (void)eventToFlushCacheOccurred;
- (void)eventToCommitCacheOccurred;
- (id)humanReadableDataActiveString;
- (void)handlePLBasebandEventNotification:(id)a0;
- (void)logDSDSEventForwardSDMwithSubsId:(long long)a0 SDMEnable:(BOOL)a1;
- (void)registerForMAVModelMetricsNotifications:(id)a0;
- (void)handlePostCDRXCapability;
- (id)translateCallStatus:(int)a0;
- (void)modelScanPower:(id)a0;
- (void)triggerMessage:(id)a0;
- (void)accountVoicePower:(id)a0 state:(id)a1;
- (void)setupTelephonyRegistrationChannels;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)logTelephonyActivityAtInit;
- (void)ratSelectionChanged:(id)a0 selection:(id)a1;
- (void)modelStateTransitionPower:(id)a0 rat:(id)a1 state:(id)a2;

@end
