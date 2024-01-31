@class NSString, NSMutableDictionary, NSMutableSet, NSDate;

@interface cellFlowObserver : NSObject <flowDispositionObserver> {
    int _classCounter[32];
    int _classFlags;
    int _intialClassFlags;
    int _everSetClassFlags;
    int _everReportedClassFlags;
    int _lastReportedClassFlags;
    unsigned int _dampeningMsecs;
    NSDate *_lastReportTimestamp;
    BOOL _dampening;
    unsigned int _seqno;
    NSMutableDictionary *_foregroundAppObservelist;
    NSMutableDictionary *_perAppMaxRRCTimeSecs;
    BOOL _flowSnapshotActive;
    NSMutableSet *_flowSnapshotApps;
    unsigned int _flowSnapshotFlags;
    double _flowSnapshotAccumulatedTCEnabledTime;
    NSDate *_flowSnapshotTCEnabledStartTime;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configurePolicies:(id)a0;
- (void)noteForegroundState:(BOOL)a0 forApp:(id)a1 hasForegroundApps:(BOOL)a2;
- (id)infoDir;
- (void)endTrafficClassFlowSnapshot:(id)a0 periodUsecs:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)init;
- (void)beginTrafficClassFlowSnapshot;
- (unsigned int)noteFlow:(id)a0 snapshot:(id)a1 present:(BOOL)a2 trackedBy:(id)a3;
- (void)noteNewUsage:(unsigned int)a0;
- (void)resetTrafficClassFlowSnapshot:(BOOL)a0;
- (BOOL)performDisposition:(unsigned int)a0 present:(BOOL)a1;
- (void).cxx_destruct;

@end
