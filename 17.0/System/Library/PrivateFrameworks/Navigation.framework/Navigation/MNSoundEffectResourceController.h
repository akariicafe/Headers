@class AVAudioPlayer, NSString;
@protocol MNSoundEffectControllerDelegate;

@interface MNSoundEffectResourceController : NSObject <AVAudioPlayerDelegate> {
    unsigned long long _indicatorID;
}

@property (retain, nonatomic) AVAudioPlayer *approach;
@property (retain, nonatomic) AVAudioPlayer *leftTurn;
@property (retain, nonatomic) AVAudioPlayer *rightTurn;
@property (weak, nonatomic) id<MNSoundEffectControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stop;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)_mediaSessionServicesWereReset:(id)a0;
- (void)_audioSessionInterruption:(id)a0;
- (void)_mediaSessionServicesWereLost:(id)a0;
- (id)_playerForFileName:(id)a0 andExtension:(id)a1;
- (void)_registerForObservation;
- (BOOL)playSound:(unsigned long long)a0 andReport:(out id *)a1;

@end
