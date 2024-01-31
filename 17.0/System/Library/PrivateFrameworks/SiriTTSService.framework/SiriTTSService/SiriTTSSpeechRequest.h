@class SiriTTSSynthesisContext, SiriTTSAudibleContext, NSString;

@interface SiriTTSSpeechRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol, SiriTTSSynthesizingRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ synthesisContext;
@property (nonatomic, readonly) NSString *description;

- (void)setPitch:(float)a0;
- (void)setVolume:(float)a0;
- (id)init;
- (BOOL)whisper;
- (void)encodeWithCoder:(id)a0;
- (void)setRate:(float)a0;
- (float)volume;
- (void)setWhisper:(BOOL)a0;
- (id)voice;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)setVoice:(id)a0;
- (float)pitch;
- (float)rate;
- (id)initWithCoder:(id)a0;
- (void)setContextInfo:(id)a0;
- (id)contextInfo;
- (unsigned int)audioSessionId;
- (id)customResourceURLs;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (id /* block */)didStartSpeaking;
- (BOOL)disableCompactVoice;
- (BOOL)immediate;
- (id)initWithText:(id)a0 voice:(id)a1;
- (float)playbackVolume;
- (BOOL)privacySensitive;
- (id)prosodyProperties;
- (void)setAudioSessionId:(unsigned int)a0;
- (void)setCustomResourceURLs:(id)a0;
- (void)setDidGenerateAudio:(id /* block */)a0;
- (void)setDidGenerateWordTimings:(id /* block */)a0;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setDisableCompactVoice:(BOOL)a0;
- (void)setImmediate:(BOOL)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setPrivacySensitive:(BOOL)a0;
- (void)setProsodyProperties:(id)a0;
- (void)setSiriRequestId:(id)a0;
- (void)setSynthesisProfile:(long long)a0;
- (id)siriRequestId;
- (long long)synthesisProfile;

@end
