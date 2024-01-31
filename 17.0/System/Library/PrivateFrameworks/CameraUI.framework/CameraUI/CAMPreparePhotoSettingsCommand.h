@class CAMCaptureGraphConfiguration;

@interface CAMPreparePhotoSettingsCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithGraphConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
