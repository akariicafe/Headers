@interface CAMURLConfigurationRequest : NSObject

@property (readonly, nonatomic) long long requestedCaptureMode;
@property (readonly, nonatomic) long long requestedCaptureDevice;
@property (readonly, nonatomic) BOOL wantsQRCodeForSession;

- (BOOL)_initializeFromQueryDictionary:(id)a0;
- (long long)_captureDeviceFromString:(id)a0 outCaptureDevice:(long long *)a1;
- (BOOL)_captureModeFromString:(id)a0 outCaptureMode:(long long *)a1;
- (id)initWithQueryDictionary:(id)a0;

@end
