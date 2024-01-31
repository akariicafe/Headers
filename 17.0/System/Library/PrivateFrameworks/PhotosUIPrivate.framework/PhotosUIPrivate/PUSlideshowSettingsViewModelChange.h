@interface PUSlideshowSettingsViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setPresetDidChange:) BOOL presetDidChange;
@property (nonatomic, setter=_setMediaItemDidChange:) BOOL mediaItemDidChange;
@property (nonatomic, setter=_setRepeatDidChange:) BOOL shouldRepeatDidChange;
@property (nonatomic, setter=_setStepDurationDidChange:) BOOL stepDurationDidChange;
@property (nonatomic, setter=_setMusicOnDidChange:) BOOL musicOnDidChange;

- (BOOL)hasChanges;

@end
