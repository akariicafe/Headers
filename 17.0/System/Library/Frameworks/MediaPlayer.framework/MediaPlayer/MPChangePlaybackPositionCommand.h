@interface MPChangePlaybackPositionCommand : MPRemoteCommand

@property (nonatomic) BOOL canBeControlledByScrubbing;

- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)newCommandEventWithPositionTime:(double)a0;

@end
