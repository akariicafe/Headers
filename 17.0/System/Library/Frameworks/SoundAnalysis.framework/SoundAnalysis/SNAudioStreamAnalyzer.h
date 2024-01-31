@class NSString, NSPredicate, SNForwardPassAudioStreamAnalyzer, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray, AVAudioFormat;
@protocol OS_dispatch_queue;

@interface SNAudioStreamAnalyzer : NSObject {
    NSMutableArray *_requests;
    AVAudioFormat *_currentFormat;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    NSPredicate *_firstPassRecordingPredicate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstPassRecordingHistoryDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sysdiagnoseHistoryDuration;
    SNForwardPassAudioStreamAnalyzer *_firstPassAnalyzer;
    NSMutableDictionary *_secondPassAnalyzers;
    NSDictionary *_secondPassUltronReportOps;
    NSDictionary *_firstPassUltronReportOps;
    NSDictionary *_firstPassResultsHistory;
    struct unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> { struct __compressed_pair<AT::RingBuffer *, std::default_delete<AT::RingBuffer>> { struct RingBuffer *__value_; } __ptr_; } _ringBuffer;
    struct unique_ptr<CABufferList, std::default_delete<CABufferList>> { struct __compressed_pair<CABufferList *, std::default_delete<CABufferList>> { struct CABufferList *__value_; } __ptr_; } _ringBufferWriteBufferList;
    id /* block */ _unregisterLogCollectHook;
    long long _analysisState;
}

@property (readonly, nonatomic) NSString *detailedDescription;

+ (BOOL)shouldLogRequests;
+ (BOOL)shouldLogResultsHistory;

- (void)removeAllRequests;
- (void)dealloc;
- (id)initWithFormat:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (BOOL)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (void)completeAnalysis;

@end
