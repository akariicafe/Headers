@class NSString, NSArray, VATSpeechRecognizer, VATConfiguration, FeatureExtractObjc;
@protocol VATKeywordSpotterDelegate;

@interface VATKeywordSpotter : NSObject {
    NSArray *_keywordsWithPhonemes;
    FeatureExtractObjc *fe;
    id<VATKeywordSpotterDelegate> _delegate;
    BOOL _started;
    void *_floatFstDecoder;
    struct unordered_map<std::string, float, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, float>>> { struct __hash_table<std::__hash_value_type<std::string, float>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, float>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, float>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _phraseThresholds;
    int _processedFrameCount;
    NSString *_filePath;
    double _fileCurrentDuration;
    double _startTime;
    long long _fileByteCount;
    BOOL _isRunning;
    struct vector<voiceactions::FstSpotterResults, std::allocator<voiceactions::FstSpotterResults>> { struct FstSpotterResults *__begin_; struct FstSpotterResults *__end_; struct __compressed_pair<voiceactions::FstSpotterResults *, std::allocator<voiceactions::FstSpotterResults>> { struct FstSpotterResults *__value_; } __end_cap_; } _keywordResults;
    int _frameCountSinceKeywordDetected;
}

@property (nonatomic) VATConfiguration *configuration;
@property (nonatomic) BOOL audioDebuggingEnabled;
@property (nonatomic) BOOL batchDecodeEnabled;
@property (nonatomic) VATSpeechRecognizer *recognizer;
@property (nonatomic) BOOL secondPassEnabled;
@property (copy, nonatomic) NSString *customSecondPassModelPath;
@property (nonatomic) BOOL preKeywordSilenceCheckEnabled;
@property (nonatomic) BOOL duringKeywordSilenceCheckEnabled;
@property (nonatomic) BOOL postKeywordSilenceCheckEnabled;

+ (id)pronounciationsFor:(id)a0 wordSeparator:(id)a1;

- (void)dealloc;
- (void)start;
- (id).cxx_construct;
- (void)stop;
- (void).cxx_destruct;
- (void)addAudioSamples:(const void *)a0 count:(int)a1;
- (void)setStreamingMode:(BOOL)a0;
- (void)updateWithKeywordsWithPhonemes:(id)a0;
- (void)_acousticCallback:(id)a0 rows:(long long)a1 cols:(long long)a2;
- (void)_categoryDealloc;
- (id)_handleAudioDebuggingForKeyword:(id)a0 result:(void *)a1 buffer:(id)a2;
- (id)_handleSecondPass:(id)a0 expectedKeyword:(id)a1 duration:(double *)a2 secondPassAudio:(id *)a3;
- (void)_handleValidResult:(void *)a0;
- (void)_initializeDecoderForKeywordsWithPhonemes:(id)a0;
- (BOOL)_isDetectionValidForResult:(void *)a0 reason:(id *)a1;
- (void)_postKeywordSilenceProcessingWithResults:(id)a0 rows:(long long)a1 cols:(long long)a2;
- (id)_replaceModelPathWithAbsolutePathForTest:(id)a0;
- (id)_thresholdsForAllPhrases;
- (void)addAudioSamples:(const void *)a0 count:(int)a1 isFloat:(BOOL)a2;
- (void)addAudioSamples:(const void *)a0 count:(int)a1 isFloat:(BOOL)a2 filePath:(id)a3 byteCount:(long long)a4 currentDuration:(double)a5;
- (void)addAudioSamples:(const void *)a0 length:(int)a1;
- (id)init:(id)a0 delegate:(id)a1 silenceLookback:(int)a2 silenceExpect:(int)a3 batchDecode:(BOOL)a4 enableAudioDebugging:(BOOL)a5;
- (id)initWithConfig:(id)a0 keywords:(id)a1 delegate:(id)a2;
- (id)initWithConfig:(id)a0 keywordsWithPhonemes:(id)a1 delegate:(id)a2;
- (id)initWithConfig:(id)a0 keywordsWithPhonemes:(id)a1 delegate:(id)a2 silenceLookback:(int)a3 silenceExpect:(int)a4 batchDecode:(BOOL)a5 enableAudioDebugging:(BOOL)a6;
- (id)initWithKeywords:(id)a0 delegate:(id)a1;
- (id)initWithKeywordsWithPhonemes:(id)a0 delegate:(id)a1;
- (BOOL)isValidRecognizer;
- (void)setSecondPassEnabled:(BOOL)a0 customAssetPath:(id)a1;
- (void)updateWithKeywords:(id)a0;

@end
