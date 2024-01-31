@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable

@property (nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges;
@property (nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) BOOL playbackDisabled;
@property (readonly, nonatomic) NSMutableSet *_playbackDisabledReasons;
@property (readonly, nonatomic) double hintProgress;
@property (readonly, nonatomic) long long state;
@property (nonatomic) BOOL playIsSticky;

- (void)_setState:(long long)a0;
- (id)init;
- (void)reset;
- (id)mutableChangeObject;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)setHintProgress:(double)a0;
- (void)setPlaybackDisabled:(BOOL)a0 forReason:(id)a1;

@end
