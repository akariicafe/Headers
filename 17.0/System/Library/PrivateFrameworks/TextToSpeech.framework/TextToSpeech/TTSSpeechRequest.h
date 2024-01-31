@class TTSSpeechVoice, NSString, TTSSpeechString, AVSpeechSynthesisProviderVoice, NSArray, NSObject;
@protocol OS_voucher, TTSSpeechRequestDelegate;

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {
    id<TTSSpeechRequestDelegate> _delegate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (copy, nonatomic) TTSSpeechVoice *voice;
@property (retain, nonatomic) TTSSpeechString *speechString;
@property (retain, nonatomic) TTSSpeechString *unescapedSpeechString;
@property (copy, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) long long gender;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) BOOL maintainsInput;
@property (nonatomic) BOOL supportsAccurateWordCallbacks;
@property (nonatomic) BOOL skipLuthorRules;
@property (nonatomic) BOOL audioSessionIDIsValid;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) double latency;
@property (nonatomic) double dispatchTime;
@property (nonatomic) double handledTime;
@property (retain, nonatomic) NSArray *channels;
@property (nonatomic) unsigned long long synthesizerInstanceID;
@property (nonatomic) void *clientContext;
@property (copy, nonatomic) id /* block */ audioBufferCallback;
@property (copy, nonatomic) id /* block */ latencyCallback;
@property (nonatomic) BOOL synthesizeSilently;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (retain, nonatomic) NSString *speechSource;
@property (nonatomic) BOOL sentSpeechDone;

- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)vocalizerGender;
- (void)speechRequestDidContinueForService:(id)a0;
- (void)speechRequestDidPauseForService:(id)a0;
- (void)speechRequestDidStartForService:(id)a0;
- (void)speechRequestDidStopWithSuccess:(BOOL)a0 phonemesSpoken:(id)a1 forService:(id)a2 error:(id)a3;
- (void)speechRequestMarker:(id)a0 didStartForService:(id)a1;
- (long long)vocalizerFootprint;

@end
