@class PLTimer, PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition;

@interface PLNfcAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *cardNotification;
@property (retain) PLXPCListenerOperatorComposition *fieldNotification;
@property (retain) PLXPCListenerOperatorComposition *transactionNotification;
@property (retain) PLXPCListenerOperatorComposition *tsmCommunicationNotification;
@property (retain) PLEntryNotificationOperatorComposition *nfcPowerCountersNotification;
@property (retain) PLEntryNotificationOperatorComposition *nfcAccessoryPowerCounterNotification;
@property double onPower;
@property (retain) NSDate *lastPowerCountersLogTime;
@property (retain) NSDate *lastAccessoryPowerCountersLogTime;
@property (retain) PLTimer *nfcConnectionRetryTimer;
@property int nfcConnectionRetryCount;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (void)load;
+ (id)parseLPEMFromData:(id)a0;
+ (id)entryEventForwardDefinitionTransaction;
+ (id)entryEventForwardDefinitionField;
+ (id)entryEventIntervalDefinitionAccessoryPower;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionLPEM;
+ (id)entryEventForwardDefinitionTSMCommunication;
+ (id)entryEventForwardDefinitionCard;
+ (id)entryEventIntervalDefinitionPower;

- (id)init;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)setupLPEMCounter;
- (void)fieldChangedWithEntry:(id)a0;
- (void)setUpNfcPowerCounterRetrieval;
- (void).cxx_destruct;
- (void)retrieveAndLogNfcPowerCountersWithRetry:(BOOL)a0;
- (unsigned int)getNFCHarwareState;
- (void)retrieveAndLogNfcAccessoryPowerCountersWithRetry:(BOOL)a0;
- (void)logEventForwardLPEM;
- (void)setupNfcAccessoryPowerCounterRetrieval;

@end
