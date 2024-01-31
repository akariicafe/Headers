@interface CAMPortraitAutoSuggestEnabledCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;

- (id)initWithSubcommands:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPortraitAutoSuggestEnabled:(BOOL)a0;

@end
