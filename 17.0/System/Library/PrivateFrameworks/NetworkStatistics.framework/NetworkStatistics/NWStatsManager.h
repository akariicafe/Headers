@class NSMutableArray, NSMutableDictionary, NWStatsPollHandler, NSMutableSet, NSObject, NWStatsMonitor;
@protocol OS_dispatch_source, OS_dispatch_queue, NWStatsManagerDelegate;

@interface NWStatsManager : NSObject {
    int _interfaceTraceFd;
    char *_iftracebuf;
    unsigned int _continuationCount;
    unsigned int _consecutiveReadLimit;
    unsigned long long _currentPollReference;
    unsigned long long _nextPollReference;
    double _trafficDeltaAdjustmentFactor;
    BOOL _eagerInstantiate;
    BOOL _handlingSocketReads;
    int _currentRcvBufSize;
    double _currentRcvBufTimestamp;
    int _numAdaptiveRcvBufIncrements;
    struct provider_counts { unsigned long long numSrcsAdded; unsigned long long numUpdatesOnOpen; unsigned long long numUpdatesOnPoll; unsigned long long numUpdatesOnEvent; unsigned long long numUpdatesOnClose; } _providerCounts[11];
    struct combined_counts { unsigned long long numRemoves; unsigned long long numRemovesAfterDrop; unsigned long long numRemovesAfterFilter; unsigned long long numRemoveSources; unsigned long long numRemoveSourcesAfterDrop; unsigned long long numRemoveSourcesAfterFilter; } _combinedCounts;
}

@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property int sockfd;
@property (retain) NSMutableDictionary *internalSources;
@property (retain) NSMutableSet *interfaceSources;
@property (retain) NWStatsMonitor *statsMonitor;
@property unsigned long long currentQueryAllReference;
@property unsigned long long querySequenceNumber;
@property char *readBuffer;
@property (retain) NSMutableArray *queuedPolls;
@property (retain) NWStatsPollHandler *activePoll;
@property BOOL configured;
@property (getter=isInvalidated) BOOL invalidated;
@property (weak, nonatomic) id<NWStatsManagerDelegate> delegate;

- (int)configure:(id)a0;
- (int)_setThresholds:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)_setInterfaceTraceFd:(int)a0;
- (void)ignoreFlow:(unsigned long long)a0;
- (void)dealloc;
- (id)stateDictionary;
- (void)_sendMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(long long)a1;
- (void)_addAllForProvider:(int)a0 filter:(unsigned long long)a1 events:(unsigned long long)a2;
- (void)_handleMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(long long)a1;
- (id)getState;
- (int)initialConfigure:(id)a0;
- (void)_removeSourceInternal:(unsigned long long)a0;
- (void)invalidate;
- (void)dumpState;
- (void)ignoreSource:(unsigned long long)a0;
- (void)_startQueuedPoll;
- (void)_traceMemoryBuf:(char *)a0 length:(long long)a1 tag:(char *)a2;
- (void)_restartPoll:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)_setThreshold:(unsigned long long)a0 onInterface:(unsigned int)a1;
- (void)_sendRemoveSource:(unsigned long long)a0;
- (void)_sendPoll;
- (void)_startPoll:(id)a0;
- (void)_noteInterfaceSrcRef:(unsigned long long)a0 forInterface:(unsigned int)a1 threshold:(unsigned long long)a2;
- (void).cxx_destruct;
- (int)reconfigure:(id)a0;
- (void)_handleCounts:(struct nstat_msg_src_counts { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned long long x1; unsigned long long x2; struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x3; } *)a0;
- (void)_handleRemoveForSource:(id)a0;
- (void)_sendUpdateRequestMessage:(unsigned long long)a0;
- (void)_trace:(char *)a0;
- (void)_handleCompletion:(unsigned long long)a0;
- (int)refresh:(id /* block */)a0;
- (int)refreshUsingBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (int)statsRefreshCurrentUsage;
- (void)_adaptAfterDrop;
- (void)_drainReadBuffer;
- (void)_handleReads:(long long)a0;
- (int)_refreshSyncUsingBlock:(id /* block */)a0;
- (int)_refreshUsingBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (int)refreshSync;
- (int)refreshSyncUsingBlock:(id /* block */)a0;
- (BOOL)setRcvBufsize:(int)a0;

@end
