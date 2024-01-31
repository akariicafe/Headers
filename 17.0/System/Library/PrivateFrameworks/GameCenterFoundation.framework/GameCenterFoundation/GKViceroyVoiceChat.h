@class NSString, GKVoiceChatSession, GKConnection;
@protocol GKViceroyVoiceChatStateUpdateDelegate;

@interface GKViceroyVoiceChat : NSObject <GKVoiceChatSessionDelegate>

@property (retain, nonatomic) GKConnection *connection;
@property (retain, nonatomic) GKVoiceChatSession *voiceChatSession;
@property (weak, nonatomic) id<GKViceroyVoiceChatStateUpdateDelegate> stateUpdateDelegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) float volume;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)gkVoiceChatSession:(id)a0 stateUpdate:(unsigned long long)a1 forPeer:(id)a2;
- (id)initWithName:(id)a0 connection:(id)a1 gkSession:(id)a2;
- (void)setMuted:(BOOL)a0 forPlayerID:(id)a1;

@end
