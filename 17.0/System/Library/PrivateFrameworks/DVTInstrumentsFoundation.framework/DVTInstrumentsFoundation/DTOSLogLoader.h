@class NSMutableDictionary, NSMutableData, NSDate, OSLogEventStreamBase, DTOSLogLoaderConfiguration, XRIntKeyedDictionary, NSMutableArray, OSLogEventStore, XRMobileAgent, DTOSLogLoaderFetchTicket, OSLogEventLiveStream, NSError, OSLogEventLiveStore;
@protocol DTOSLogLoaderDelegate, DTOSLogLoaderVisitor;

@interface DTOSLogLoader : XRMobileAgentQueueStop {
    OSLogEventStreamBase *_deserializedEventStream;
    BOOL _deserializedEventStreamIsActivated;
    DTOSLogLoaderConfiguration *_configuration;
    OSLogEventStore *_loggedEventStore;
    OSLogEventStreamBase *_loggedStream;
    OSLogEventLiveStore *_liveEventStore;
    OSLogEventLiveStream *_liveStream;
    NSDate *_startTime;
    NSDate *_endTime;
    unsigned long long _slackInMachTimeUnits;
    XRMobileAgent<DTOSLogLoaderVisitor> *_agentWaitingForStop;
    DTOSLogLoaderFetchTicket *_lastFetchTicket;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _stateChanged;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    unsigned long long _machTimeAdjustment;
    struct unique_ptr<DTOSLogTableLoader, std::default_delete<DTOSLogTableLoader>> { struct __compressed_pair<DTOSLogTableLoader *, std::default_delete<DTOSLogTableLoader>> { struct DTOSLogTableLoader *__value_; } __ptr_; } _tableLoader;
    struct DTStateActionEncoder { int _state; struct OutputTape { unsigned short *start; unsigned short *head; unsigned short *end; } _tape; char *_pushBufferStart; char *_pushBufferEnd; unsigned long long _pushBufferBitOffset; unsigned long long _backgroundPatternStart; struct StackReference { unsigned short _generation; unsigned short _reference; } _topOfStackRef; unsigned char _background; int _stateWhenTapeRanOut; unsigned int _pushBufferSizeToXmit; } _encoder;
    unsigned long long _lastMachTime;
    XRMobileAgent<DTOSLogLoaderVisitor> *_agentWaitingForEvents;
    NSMutableData *_workingBuffer;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _deviceSessionRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _defaultLevelRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _infoLevelRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _debugLevelRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _errorLevelRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _faultLevelRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _beginRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _emitRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _endRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _threadScopeRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _processScopeRef;
    struct StackReference { unsigned short _generation; unsigned short _reference; } _systemScopeRef;
    XRIntKeyedDictionary *_pushedProcessesByPid;
    XRIntKeyedDictionary *_pushedThreadsByTid;
    NSMutableDictionary *_repeatedStrings;
    NSMutableDictionary *_repeatedUUIDs;
    NSMutableDictionary *_repeatedPlaceholders;
    NSMutableArray *_argReferenceConstants;
    int _rowsSent;
    unsigned int _lostEventAccumulator;
    BOOL _workingBufferFull;
    BOOL _workingBufferCanBeReplaced;
    BOOL _didHandleRecord;
    BOOL _ignoreNextRecord;
    BOOL _calledForHelp;
    BOOL _isLastBuffer;
    BOOL _running;
    XRIntKeyedDictionary *_pidToExecNameMapping;
}

@property (readonly, nonatomic) NSError *failureReason;
@property (weak, nonatomic) id<DTOSLogLoaderDelegate> delegate;

+ (void)heartbeat;
+ (id)heartbeatPredicate;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_setupLoggedStreamForNextChunk:(id)a0;
- (id)_stackReferenceForRepeatedUUID:(id)a0;
- (void)_escortAgentToExit:(id)a0 withTicket:(id)a1;
- (void)_handleRecord:(id)a0;
- (BOOL)_holdReceivedAgent:(id)a0 ticket:(id)a1;
- (void)_performResetOnOutputStream;
- (void)_prepareAgentToExecute:(id)a0 withTicket:(id)a1;
- (void)_setupCommonStreamParameters:(id)a0;
- (void)_setupLiveStream:(id)a0;
- (id)_stackReferenceForRepeatedString:(id)a0;
- (id)ticketToFetchData:(id)a0 window:(double)a1;
- (id)ticketToPrepare:(id)a0 configuration:(id)a1;
- (id)ticketToStartStream:(id)a0;
- (id)ticketToStopStream:(id)a0;

@end
