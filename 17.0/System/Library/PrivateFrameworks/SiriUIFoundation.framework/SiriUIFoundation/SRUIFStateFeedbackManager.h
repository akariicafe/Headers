@class NSString, AFWatchdogTimer, SOMediaNowPlayingObserver, NSObject;
@protocol SRUIFStateFeedbackProviding, OS_dispatch_queue, SRUIFStateFeedbackManagerDelegate;

@interface SRUIFStateFeedbackManager : NSObject <SOMediaNowPlayingListening> {
    id<SRUIFStateFeedbackProviding> _provider;
    id<SRUIFStateFeedbackManagerDelegate> _delegate;
    BOOL _stateFeedbackNeeded;
    AFWatchdogTimer *_delayToneTimer;
    NSString *_responseMode;
    NSObject<OS_dispatch_queue> *_nowPlayingObserverQueue;
    SOMediaNowPlayingObserver *_nowPlayingObserver;
    long long _nowPlayingState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)nowPlayingObserver:(id)a0 playbackStateDidChangeFrom:(long long)a1 to:(long long)a2 lastPlayingDate:(id)a3;
- (void).cxx_destruct;
- (void)audioPlaybackRequestDidStartForRequest:(id)a0;
- (void)didUpdateSpeechEndEstimate:(unsigned long long)a0;
- (id)initWithStateFeedbackProvider:(id)a0 delegate:(id)a1;
- (void)siriSessionDidEnd;
- (void)cancelFeedbackWithCompletion:(id /* block */)a0;
- (void)playAudioPlaybackRequest:(id)a0 completion:(id /* block */)a1;
- (void)updateResponseMode:(id)a0;
- (void)_cancelFeedback;
- (void)_playDelayFeedback;
- (void)_scheduleDelayToneFor:(double)a0;

@end
