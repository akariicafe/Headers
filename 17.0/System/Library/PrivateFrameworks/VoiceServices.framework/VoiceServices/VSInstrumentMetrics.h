@class NSString;

@interface VSInstrumentMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *utterance;
@property (copy) NSString *voiceAssetKey;
@property (copy) NSString *voiceResourceAssetKey;
@property (copy) NSString *audioOutputRoute;
@property (copy) NSString *clientBundleIdentifier;
@property (copy) NSString *experimentIdentifier;
@property long long requestCreatedTimestamp;
@property long long eagerRequestCreatedTimestampDiffs;
@property long long synthesisBeginTimestamp;
@property long long synthesisEndTimestamp;
@property long long speechBeginTimestamp;
@property (readonly) long long speechEstimatedOutputBeginTimestamp;
@property long long speechEndTimestamp;
@property long long audioStartTimestampDiffs;
@property long long serverFirstPacketTimestamp;
@property long long serverLastPacketTimestamp;
@property double serverStreamedAudioDuration;
@property double audioDuration;
@property BOOL isWarmStart;
@property BOOL isServerTTS;
@property BOOL isServerStreamTTS;
@property BOOL isServerTimeout;
@property BOOL isServerTTSRacing;
@property BOOL canUseServerTTS;
@property BOOL neuralAlignmentStall;
@property BOOL neuralAudioClick;
@property BOOL neuralFallback;
@property long long promptCount;
@property long long errorCode;
@property long long sourceOfTTS;
@property BOOL isSpeechRequest;
@property BOOL isCacheHitFromDisk;
@property BOOL isCacheHitFromMemory;

+ (id)descriptionFormatter;
+ (id)stringOfSourceOfTTS:(long long)a0;
+ (id)vs_metricsFromSTSMetrics:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)timeToSpeakLatency;
- (BOOL)isSynthesisCached;
- (double)_clockFactor;
- (double)audioQueueLatency;
- (double)cappedRealTimeFactor;
- (id)dictionaryMetrics;
- (double)eagerRequestTimeGap;
- (double)realTimeFactor;
- (double)serverStreamFirstPacketLatency;
- (double)serverStreamLastPacketLatency;
- (double)timeToPlaybackLatency;
- (double)ttsSynthesisLatency;

@end
