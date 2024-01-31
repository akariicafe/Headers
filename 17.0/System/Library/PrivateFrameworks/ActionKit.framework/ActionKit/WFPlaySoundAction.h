@class AVAudioPlayer, NSTimer, NSString;

@interface WFPlaySoundAction : WFAction <AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanup;
- (void)updateProgress;
- (void).cxx_destruct;
- (void)cancel;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (id)contentDestinationWithError:(id *)a0;
- (BOOL)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithAudioFileURL:(id)a0 fileTypeHint:(id)a1 duckOthers:(BOOL)a2;
- (void)runWithDefaultSound;

@end
