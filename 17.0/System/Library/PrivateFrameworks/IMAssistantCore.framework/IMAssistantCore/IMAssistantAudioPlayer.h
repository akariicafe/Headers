@class NSString, AVAudioPlayer;
@protocol IMAssistantAudioPlayerDelegate;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    id<IMAssistantAudioPlayerDelegate> _delegate;
    AVAudioPlayer *_player;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)playerState;
- (id)initWithDelegate:(id)a0 identifier:(id)a1;
- (void)stopPlaying;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)cleanupAudioSession;
- (BOOL)setupAudioSession;
- (BOOL)startPlayingAudioURL:(id)a0;

@end
