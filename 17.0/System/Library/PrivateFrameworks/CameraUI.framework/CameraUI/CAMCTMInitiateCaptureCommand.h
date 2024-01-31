@class CAMStillImageCaptureRequest;

@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMStillImageCaptureRequest *_settings;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_momentSettingsWithContext:(id)a0;

@end
