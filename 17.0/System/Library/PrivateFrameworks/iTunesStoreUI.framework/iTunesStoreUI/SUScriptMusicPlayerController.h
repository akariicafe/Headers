@class NSString, NSNumber, SUScriptMediaItem;

@interface SUScriptMusicPlayerController : SUScriptObject {
    NSString *_playerType;
}

@property (readonly) double currentPlaybackTime;
@property (readonly) SUScriptMediaItem *nowPlayingItem;
@property (readonly) NSString *playbackState;
@property (readonly) NSString *playerType;
@property (copy) NSString *repeatMode;
@property (copy) NSString *shuffleMode;
@property (retain) NSNumber *volume;
@property (readonly) NSString *playbackStateInterrupted;
@property (readonly) NSString *playbackStatePaused;
@property (readonly) NSString *playbackStatePlaying;
@property (readonly) NSString *playbackStateSeekingBackward;
@property (readonly) NSString *playbackStateSeekingForward;
@property (readonly) NSString *playbackStateStopped;
@property (readonly) NSString *repeatModeAll;
@property (readonly) NSString *repeatModeDefault;
@property (readonly) NSString *repeatModeNone;
@property (readonly) NSString *repeatModeOne;
@property (readonly) NSString *shuffleModeAlbums;
@property (readonly) NSString *shuffleModeDefault;
@property (readonly) NSString *shuffleModeOff;
@property (readonly) NSString *shuffleModeSongs;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)scriptPlaybackStateForNativePlaybackState:(long long)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)play;
- (void)pause;
- (void)dealloc;
- (void)stop;
- (id)_className;
- (id)attributeKeys;
- (void)skipToBeginning;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)endSeeking;
- (void)setQueueWithItemCollection:(id)a0;
- (void)setQueueWithQuery:(id)a0;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (id)scriptAttributeKeys;
- (id)initWithPlayerType:(id)a0;

@end
