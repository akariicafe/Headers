@interface CAMMaximumPhotoResolutionCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _maximumPhotoResolution;

- (id)initWithSubcommands:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMaximumPhotoResolution:(long long)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
