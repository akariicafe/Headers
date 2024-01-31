@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    BOOL _initializationComplete;
    BOOL _observingSetupAssistantFinished;
    id _foregroundStateObserver;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (void)setInitializeAsHelper:(BOOL)a0;
+ (id)internalStateDictionary;
+ (BOOL)disableResourceNotifyDampening;
+ (id)configureClass:(id)a0;

- (void)_dumpState;
- (void)_administrativeDisable;
- (id)init;
- (void)_administrativeEnable;
- (BOOL)requireUserNotification;
- (void)dealloc;
- (id)internalStateDictionary;
- (void)setupAssistantFinished;
- (void)_removeAllReportRecords;
- (BOOL)noteSymptom:(id)a0;
- (void)observeSetupAssistantFinished;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;
- (void)_saveReportRecord:(id)a0;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (void)_completeInitialization:(BOOL)a0;
- (void)handleAssertionExceptionTriggerWithEvent:(id)a0 signatureSubType:(id)a1;
- (void)scheduleABCNotificationForCarrierSeedUser;
- (void)_removeReportRecordForKey:(id)a0;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (void)alertCarrierSeedUserAboutABC;
- (BOOL)_initializeWorkspace;
- (BOOL)_arbitratorReady;
- (void)removeSetupAssistantFinishedObserver;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;

@end
