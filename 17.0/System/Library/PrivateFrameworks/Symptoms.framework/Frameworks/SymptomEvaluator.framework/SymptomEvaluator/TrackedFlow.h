@class NSString, NSDate, AppTracker, FlowClassification;

@interface TrackedFlow : TrackedFlowCounts {
    unsigned long long _snapshotRxWiFiBytes;
    unsigned long long _snapshotTxWiFiBytes;
    unsigned long long _snapshotRxPkts;
    unsigned long long _snapshotTxPkts;
    unsigned long long _snapshotRxDupeBytes;
    unsigned long long _snapshotRxOOOBytes;
    unsigned long long _snapshotTxReTxBytes;
    int _snapshotTxUnacked;
}

@property (nonatomic) long long ifType;
@property (retain, nonatomic) NSString *ownerKey;
@property (nonatomic) unsigned long long flowId;
@property (retain, nonatomic) AppTracker *ultimateUser;
@property (retain, nonatomic) AppTracker *immediateUser;
@property (retain, nonatomic) NSDate *startingTimestamp;
@property (nonatomic) unsigned int txUnacked;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int trafficMgtFlags;
@property (nonatomic) unsigned int trafficClassFlags;
@property (nonatomic) BOOL isRNF;
@property (nonatomic) BOOL isForcedNonRNF;
@property (retain, nonatomic) FlowClassification *classification;
@property (retain, nonatomic) AppTracker *trackerForStatistics;
@property (nonatomic) unsigned long long classificationChangeTimer;

+ (void)_dumpStateOfType:(long long)a0;
+ (id)currentCellUsers;
+ (id)getPolledFlowInfo;
+ (void)initialize;
+ (unsigned long long)cellExpensiveUsageGrandTallyAfterAdding:(unsigned long long)a0;
+ (void)stopPollingWifiFlows;
+ (void)dumpState;
+ (void)_notifyPollingEnd;
+ (unsigned long long)rnfExpensiveUsageGrandTallyAfterAdding:(unsigned long long)a0;
+ (void)setPolledFlowQueue:(id)a0;
+ (void)_wifiStallCheck;
+ (unsigned long long)allActiveFlowsCount;
+ (void)startPollingWifiFlows:(unsigned int)a0;
+ (id)ownersOfFlowsPassingTest:(id /* block */)a0;
+ (unsigned long long)countFlowsPassingTest:(id /* block */)a0;
+ (unsigned long long)rnfUsageGrandTallyAfterAdding:(unsigned long long)a0;
+ (void)_wifiStallCheckStarted;
+ (unsigned long long)rnfUsageGrandTallyAfterSetting:(unsigned long long)a0;
+ (unsigned long long)wifiNonLocalUsageGrandTallyAfterAdding:(unsigned long long)a0;
+ (unsigned long long)cellUsageGrandTallyAfterSetting:(unsigned long long)a0;
+ (unsigned long long)foregroundNonLocalUsageGrandTallyAfterAdding:(unsigned long long)a0;
+ (unsigned long long)reverseRnfUsageGrandTallyAfterAdding:(unsigned long long)a0;
+ (unsigned long long)cellUsageGrandTallyAfterAdding:(unsigned long long)a0;
+ (unsigned long long)activeFlowsCountForType:(long long)a0;
+ (id)flowForKey:(id)a0;
+ (id)startTrackingForKey:(id)a0;
+ (void)removeTrackingForKey:(id)a0 fromSnapshot:(id)a1;

- (id)init;
- (void)_takeSnapshot;
- (id)description;
- (void).cxx_destruct;
- (void)_decrementCounters;
- (BOOL)inheritEarlyProperties:(id)a0;
- (void)_updateScoreholder:(struct scoreHolder { struct totalCounts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)a0;

@end
