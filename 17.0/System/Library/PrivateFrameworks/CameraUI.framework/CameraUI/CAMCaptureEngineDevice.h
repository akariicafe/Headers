@class CAMCaptureEngine, AVCaptureDeviceInput, AVCaptureDeviceFormat, AVCaptureDevice, CAMMemoizationCache;

@interface CAMCaptureEngineDevice : NSObject

@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine;
@property (readonly, nonatomic) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration;
@property (readonly, nonatomic) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration;
@property (readonly, nonatomic) AVCaptureDeviceFormat *_cachedPanoramaDeviceFormat;
@property (readonly, nonatomic) AVCaptureDeviceFormat *_cachedPortraitDeviceFormat;
@property (readonly, nonatomic) AVCaptureDevice *captureDevice;
@property (readonly, nonatomic) AVCaptureDeviceInput *captureDeviceInput;

- (id)_portraitModeSessionPreset;
- (id)_portraitModeDeviceFormat;
- (id)initWithEngine:(id)a0 captureDevice:(id)a1;
- (id)_panoramaDeviceFormatForConfiguration:(id)a0;
- (id)_highestQualityDeviceFormatForVideoConfiguration:(long long)a0 videoEncodingBehavior:(long long)a1 colorSpace:(long long)a2;
- (void).cxx_destruct;
- (id)_timelapseSessionPreset;
- (id)_highestQualitySessionPresetForVideoConfiguration:(long long)a0 videoEncodingBehavior:(long long)a1 colorSpace:(long long)a2;
- (id)videoDeviceFormatForGraphConfiguration:(id)a0;
- (id)_keyForVideoConfiguration:(long long)a0 videoEncodingBehavior:(long long)a1 colorSpace:(long long)a2;
- (id)videoDevicePresetForGraphConfiguration:(id)a0;

@end
