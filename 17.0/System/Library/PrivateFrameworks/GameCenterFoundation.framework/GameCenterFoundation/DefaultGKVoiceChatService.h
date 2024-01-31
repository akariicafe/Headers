@class GKVoiceChatServicePrivate;

@interface DefaultGKVoiceChatService : NSObject <GKViceroyVoiceChatService>

@property (retain, nonatomic) GKVoiceChatServicePrivate *service;
@property (getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (readonly, nonatomic) float inputMeterLevel;
@property (getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (readonly, nonatomic) float outputMeterLevel;
@property float remoteParticipantVolume;

- (id)getClient;
- (void).cxx_destruct;
- (void)receivedData:(id)a0 fromParticipantID:(id)a1;
- (void)stopVoiceChatWithParticipantID:(id)a0;
- (BOOL)acceptCallID:(long long)a0 error:(id *)a1;
- (void)denyCallID:(long long)a0;
- (void)setClient:(id)a0 gkVoiceChatService:(id)a1;
- (BOOL)startVoiceChatWithParticipantID:(id)a0 error:(id *)a1;

@end
