@class NSString, SiriTTSAudibleContext;

@interface SiriTTSPreviewRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic) void /* unknown type, empty encoding */ previewType;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned int)audioSessionId;
- (id /* block */)didStartSpeaking;
- (BOOL)immediate;
- (id)initWithVoice:(id)a0 previewType:(long long)a1;
- (float)playbackVolume;
- (void)setAudioSessionId:(unsigned int)a0;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setImmediate:(BOOL)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setSiriRequestId:(id)a0;
- (id)siriRequestId;

@end
