@class AFWatchdogTimer, AFConnection, NSString, AFAudioPlaybackRequest, NSObject;
@protocol OS_dispatch_queue;

@interface SRUIFStateFeedbackDefaultProvider : NSObject {
    AFConnection *_connection;
    AFAudioPlaybackRequest *_currentAudioPlaybackRequest;
    unsigned long long _options;
    id /* block */ _audioSessionRelinquishBlock;
    AFWatchdogTimer *_delayToneTimer;
    NSString *_uuidForFirstDelayTone;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 withPlaybackOptions:(unsigned long long)a1;
- (void)playAudioPlaybackRequest:(id)a0 completion:(id /* block */)a1;
- (void)_playAudioPlaybackRequest:(id)a0 completion:(id /* block */)a1;
- (void)_playFeedbackWithSoundId:(long long)a0 hapticLibraryKey:(id)a1 UUID:(id)a2 completion:(id /* block */)a3;
- (void)_startDelayFeedbackWithResponseMode:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelFeedback;
- (id)currentAudioPlaybackRequest;
- (void)playFeedbackForStateFeedbackType:(long long)a0 withResponseMode:(id)a1 completion:(id /* block */)a2;
- (void)releaseAudioSessionWithCompletion:(id /* block */)a0;
- (id)uuidForCurrentStateFeedback;
- (id)uuidForFirstDelayTone;

@end
