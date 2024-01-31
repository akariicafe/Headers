@class CAMVideoThumbnailOutputConfiguration;

@interface CAMVideoThumbnailOutputConfigurationCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *configuration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
