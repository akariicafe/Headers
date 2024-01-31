@class AVAudioPlayer, NSUUID, AceObject, NSString;
@protocol AFUIAudioPlayerDelegate;

@interface AFUIAudioPlayer : NSObject <AVAudioPlayerDelegate>

@property (retain, nonatomic, getter=_player, setter=_setPlayer:) AVAudioPlayer *player;
@property (weak, nonatomic) id<AFUIAudioPlayerDelegate> delegate;
@property (retain, nonatomic) AceObject *playbackCommand;
@property (nonatomic) BOOL deactivateAudioSessionOnPlaybackFinished;
@property (weak, nonatomic) NSUUID *conversationItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)voicemailPlayer;
+ (id)audioMessagePlayer;

- (void)stopPlaying;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)startPlaying;
- (id)_audioCategory;
- (id)_audioURL;
- (unsigned long long)_audioOptions;

@end
