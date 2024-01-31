@interface MPVocalsControlCommand : MPRemoteCommand

@property (nonatomic) BOOL vocalsControlActive;
@property (nonatomic) float vocalsLevel;
@property (nonatomic) float minVocalsLevel;
@property (nonatomic) float maxVocalsLevel;
@property (nonatomic, getter=isContinuous) BOOL continuous;

- (id)_mediaRemoteCommandInfoOptions;

@end
