@class ISDisplayLink;

@interface ISLiveWallpaperPlayer : ISBasePlayer {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _videoDuration;
    double _smoothedVelocity;
}

@property (nonatomic, setter=_setActive:) BOOL _active;
@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink;
@property (nonatomic, getter=_isSeeking, setter=_setSeeking:) BOOL _seeking;
@property (nonatomic, setter=_setPlayRate:) float _playRate;
@property (nonatomic, getter=isTouching) BOOL touching;
@property (nonatomic) double force;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (void)_update;
- (void)didPerformChanges;
- (void)setPlayerItem:(id)a0;
- (void)statusDidChange;
- (void)_seekVideoToEnd;
- (void)_handleDidFinishSeeking:(BOOL)a0;
- (void)_seekVideoToBeginning;
- (void)_updatePlayer;

@end
