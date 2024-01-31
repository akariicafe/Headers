@class NSArray, NSString, GKViceroyVoiceChat;

@interface GKVoiceChat : NSObject <GKViceroyVoiceChatStateUpdateDelegate>

@property (retain, nonatomic) GKViceroyVoiceChat *gkVoiceChat;
@property (copy, nonatomic) id /* block */ playerStateUpdateHandler;
@property (retain, nonatomic) NSArray *players;
@property (copy, nonatomic) id /* block */ playerVoiceChatStateDidChangeHandler;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) float volume;

+ (BOOL)isVoIPAllowed;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithViceroyVoiceChat:(id)a0 players:(id)a1;
- (id)playerIDs;
- (void)setMute:(BOOL)a0 forPlayer:(id)a1;
- (void)setPlayer:(id)a0 muted:(BOOL)a1;
- (void)stateUpdate:(long long)a0 forPlayerID:(id)a1;

@end
