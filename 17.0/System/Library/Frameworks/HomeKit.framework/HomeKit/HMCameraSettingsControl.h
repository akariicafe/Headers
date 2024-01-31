@class HMCharacteristic, _HMCameraSettingsControl;

@interface HMCameraSettingsControl : HMCameraControl

@property (retain, nonatomic) _HMCameraSettingsControl *settingsControl;
@property (readonly, nonatomic) HMCharacteristic *nightVision;
@property (readonly, nonatomic) HMCharacteristic *currentHorizontalTilt;
@property (readonly, nonatomic) HMCharacteristic *targetHorizontalTilt;
@property (readonly, nonatomic) HMCharacteristic *currentVerticalTilt;
@property (readonly, nonatomic) HMCharacteristic *targetVerticalTilt;
@property (readonly, nonatomic) HMCharacteristic *opticalZoom;
@property (readonly, nonatomic) HMCharacteristic *digitalZoom;
@property (readonly, nonatomic) HMCharacteristic *imageRotation;
@property (readonly, nonatomic) HMCharacteristic *imageMirroring;

- (void).cxx_destruct;
- (id)initWithSettingsControl:(id)a0;

@end
