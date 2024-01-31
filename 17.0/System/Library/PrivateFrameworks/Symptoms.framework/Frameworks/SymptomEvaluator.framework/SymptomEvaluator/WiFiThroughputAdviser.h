@class NSString, FlowOracle, ConfigurationParams, LargeTransferAssessor, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiThroughputAdviser : NSObject <FlowScheduledRefreshDelegate> {
    BOOL _enabled;
    BOOL _cellOutrankAdvised;
    BOOL _cellOutrankAdvisedViaInterfaceUse;
    BOOL _cellOutrankAdvisedViaLargeTransfers;
    FlowOracle *_flowOracle;
    double _lastHighInterfaceUse;
    double _lastTransferSizeUse;
    double _lastHighInterfaceUseDampeningInterval;
    double _minTransferSizeThroughputForUpgrade;
    double _minRequiredLargeTransferThroughputForContinuedOutrank;
    unsigned int _numLowerTransferThresholdFlowsForUpperThreshold;
    LargeTransferAssessor *_transferAssessor;
    ConfigurationParams *_pendingConfigurationParams;
}

@property (nonatomic) BOOL cellOutrankAdvised;
@property (nonatomic) BOOL cellOutrankAdvisedViaInterfaceUse;
@property (nonatomic) BOOL cellOutrankAdvisedViaLargeTransfers;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) LargeTransferAssessor *largeTransferAssessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)restoreDefaults;
- (id)init;
- (int)largeTransfersMeetContinuedThreshold:(id)a0;
- (BOOL)setConfiguration:(id)a0;
- (void)checkHeavyInterfaceUseAt:(double)a0;
- (int)didPollFlowsCallbackOrder;
- (void).cxx_destruct;
- (id)getStateAt:(double)a0;
- (void)checkLargeTransfersAt:(double)a0;
- (void)dumpStateAt:(double)a0;
- (void)didPollFlowsAt:(double)a0 periodic:(BOOL)a1;
- (int)largeTransfersMeetInitialThreshold:(id)a0;

@end
