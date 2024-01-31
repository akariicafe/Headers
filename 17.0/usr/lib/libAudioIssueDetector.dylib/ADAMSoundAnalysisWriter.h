@class NSMutableArray, NSString, AVAudioFormat, ADAMSRSensorWriter, SNEstimateSpeechEmotionRequest, NSObject, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface ADAMSoundAnalysisWriter : NSObject <SNResultsObserving> {
    SNAudioStreamAnalyzer *_SNAnalyzer;
    id /* block */ _completeHandler;
    int _streamType;
    unsigned long long _frameCnt;
    unsigned long long _speechEmotionTimestamp;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _processing;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _statusLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initLock;
    BOOL _isLastBatch;
    NSMutableArray *_requests;
    SNEstimateSpeechEmotionRequest *_speechEmotionRequest;
    unsigned char _siriAudioBufferCount;
    BOOL _inSiriUseCase;
    BOOL _soundAnalyzerInitialized;
    AVAudioFormat *_format;
    NSObject<OS_os_transaction> *_transaction;
    ADAMSRSensorWriter *_speechEmotionSRWriter;
    ADAMSRSensorWriter *_soundDetectionSRWriter;
    unsigned int _detectionResultCounterPerMinute;
    struct optional<unsigned long long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _detectionFirstContinuousTimeStampPerMinute;
    double _detectionFirstAbsoluteTimestampPerMinute;
    unsigned int _emotionResultCounterPerMinute;
    struct optional<unsigned long long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _emotionFirstContinuousTimeStampPerMinute;
    double _emotionFirstAbsoluteTimestampPerMinute;
    unsigned long long _laughterTimeTracker;
    unsigned long long _shoutingTimeTracker;
    unsigned long long _speechTimeTracker;
    struct set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { struct __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned long long>> { unsigned long long __value_; } __pair3_; } __tree_; } _detectionCachedTimestamps;
    struct map<unsigned long long, NSMutableArray *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, NSMutableArray *>>> { struct __tree<std::__value_type<unsigned long long, NSMutableArray *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, NSMutableArray *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, NSMutableArray *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, NSMutableArray *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, NSMutableArray *>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _detectionCachedResultMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (BOOL)isComplete;
- (BOOL)isMonitoring;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (void)_setProcessing:(BOOL)a0;
- (BOOL)verifyStateInit;
- (void)logResultCountAndFirstTimeStamp;
- (void)_initializeSoundAnalyzer;
- (BOOL)_isMonitoringEmotion;
- (BOOL)_isMonitoringSoundDetection;
- (void)createAndLogOSTransaction;
- (id)initWithWriterName:(id)a0 audioFormat:(id)a1 soundDetectionSRWriter:(id)a2 speechEmotionSRWriter:(id)a3 completionHandler:(id /* block */)a4;
- (void)reinitializeSpeechEmotionRequest;
- (void)sendCachedDetectionResultsToSensorKit;
- (BOOL)verifyStateOn;
- (int)write:(id)a0 withMetadata:(const struct Metadata { struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } x0; union { unsigned int x0; unsigned int x1; } x1; unsigned long long x2; } *)a1;

@end
