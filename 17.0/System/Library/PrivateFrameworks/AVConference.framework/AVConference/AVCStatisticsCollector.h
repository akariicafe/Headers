@class VCRateControlServerBag, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCStatisticsHistory, VCStatisticsCollectorQueue;

@interface AVCStatisticsCollector : NSObject {
    struct tagVCStatisticsCollection { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; double x12; double x13; unsigned int x14; unsigned int x15; double x16; unsigned int x17; BOOL x18; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x19; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x20; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x21; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x22; BOOL x23; } x0; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x1; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; double x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x2; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x3; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x4; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x5; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; double x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } x6; struct tagVCStatisticsVideoLossFeedback { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x7; } *_statisticsCollection;
    VCRateControlBandwidthEstimatorMap *_bandwidthEstimatorMap;
    VCRateControlOWRDEstimator *_owrdEstimator;
    VCStatisticsHistory *_history;
    VCStatisticsCollectorQueue *_queue;
    int _forceQueueWaitTimeMs;
    double _previousProcessTime;
    BOOL _useExternalThread;
    unsigned int _maxVideoLocalBurstyLoss;
    unsigned int _maxAudioLocalBurstyLoss;
    unsigned int _remotePacketReceivedAudio;
    unsigned int _remotePacketReceivedVideo;
    double _packetReceivedOWRD;
    unsigned int _feedbackOutOfOrderTotalCount;
    BOOL _resetRemoteAudioPacketReceived;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _statisticsCollectionLock;
    struct __CFAllocator { } *_statisticsChangeHandlerEntryAllocator;
    unsigned int _nextChangeHandlerIdentifier;
    struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } _statisticsChangeHandlers[14];
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _statisticsChangeHandlersLock;
    struct __CFAllocator { } *_changeHandlerRequestAllocator;
    struct tagAVCStatisticsCollectorChangedHandlerRequest { struct tagAVCStatisticsCollectorChangedHandlerRequest *next; struct tagAVCStatisticsCollectorChangedHandlerRequest *prev; int requestType; int handlerType; struct tagAVCStatisticsCollectorChangeHandlerEntry *entry; } _changeHandlerRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changeHandlerRequestsLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _startMutex;
}

@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (readonly, nonatomic) unsigned int sharedEstimatedBandwidth;
@property (readonly, nonatomic) unsigned int sharedEstimatedBandwidthUncapped;
@property (readonly, nonatomic) unsigned int sharedRemoteEstimatedBandwidth;
@property (nonatomic) unsigned int estimatedBandwidthCap;
@property (nonatomic) unsigned int expectedBitrate;
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;
@property (readonly, nonatomic) BOOL fastSuddenBandwidthDetectionEnabled;
@property (retain, nonatomic) VCRateControlServerBag *serverBag;
@property (readonly, nonatomic) BOOL isStarted;

- (void)setStatistics:(id)a0;
- (id)init;
- (void)dealloc;
- (id)getStatistics:(id)a0;
- (void)start;
- (void)stop;
- (struct tagVCStatisticsMessage { int x0; int x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; double x10; char x11[64]; int x12; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; double x12; double x13; unsigned int x14; unsigned int x15; double x16; unsigned int x17; BOOL x18; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x19; struct { unsigned short x0; BOOL x1; BOOL x2; unsigned int x3; } x20; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x21; struct tagVCStatisticsECNStats { unsigned short x0; unsigned short x1; } x22; BOOL x23; } x1; struct { double x0; double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned int x9; } x2; struct { unsigned int x0; BOOL x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x9; } x3; struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; double x10; double x11; double x12; double x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x4; struct { unsigned int x0; unsigned int x1; unsigned int x2; double x3; } x5; struct { int x0; unsigned int x1; unsigned int x2; unsigned int x3; double x4; double x5; double x6; unsigned int x7; unsigned int x8; } x6; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x7; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned int x7; } x8; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; double x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } x9; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; int x10; unsigned int x11; union { struct { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; float x11; BOOL x12; unsigned short x13; unsigned int x14[6]; } x0; struct { unsigned char x0; short x1; short x2; char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned short x9; unsigned char x10; } x1; } x12; } x10; struct tagVCStatisticsVideoLossFeedback { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x11; } x7; })getVCStatisticsWithType:(int)a0 time:(double)a1;
- (id)initForSimulation:(BOOL)a0 useExternalThread:(BOOL)a1;
- (int)registerStatisticsChangeHandlerWithType:(int)a0 handler:(id /* block */)a1;
- (BOOL)shouldProcessAtTime:(double)a0;
- (void)unregisterAllStatisticsChangeHandlers;
- (BOOL)unregisterStatisticsChangeHandlerWithType:(int)a0 handlerIndex:(int)a1;

@end
