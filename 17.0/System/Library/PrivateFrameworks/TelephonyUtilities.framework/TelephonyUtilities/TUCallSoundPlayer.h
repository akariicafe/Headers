@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (BOOL)attemptToPlayDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (void)stopPlaying;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)attemptToPlayDescriptor:(id)a0;
- (BOOL)attemptToPlaySoundType:(long long)a0 forCall:(id)a1;

@end
