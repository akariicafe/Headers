@class NSString, LPInlineMediaPlaybackInformation;
@protocol NSObject;

@interface LPiTunesPlayButtonControl : LPPlayButtonControl <LPMediaPlayable, LPMediaRemotePlaybackObserverClient> {
    LPInlineMediaPlaybackInformation *_playbackInformation;
    id<NSObject> _playbackDidEndNotificationToken;
    BOOL _wasPlayingMusicWhenLyricExcerptPlaybackStarted;
}

@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) BOOL hasMuteControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)playable;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)buttonPressed:(id)a0;
- (void)startPlaying;
- (void)updatePlayState;
- (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueue;
- (double)desiredUpdateIntervalForMediaRemotePlaybackObserver:(id)a0;
- (id)initWithPlaybackInformation:(id)a0 style:(id)a1 theme:(id)a2;
- (BOOL)matchesNowPlayingItem;
- (id)mediaPlaybackApplicationID;
- (void)mediaRemotePlaybackObserverPlayingItemDidChange:(id)a0;
- (void)resetPlaybackState;
- (void)startPlaybackForLyricExcerpt;

@end
