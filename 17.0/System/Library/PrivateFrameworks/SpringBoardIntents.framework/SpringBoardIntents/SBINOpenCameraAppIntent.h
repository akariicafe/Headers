@interface SBINOpenCameraAppIntent : SBINAppIntent

@property (readonly, nonatomic) unsigned long long captureDevice;
@property (readonly, nonatomic) unsigned long long captureMode;

- (unsigned long long)hash;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCaptureDevice:(unsigned long long)a0 captureMode:(unsigned long long)a1 systemContext:(id)a2;

@end
