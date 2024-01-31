@class NSDictionary, NSArray;

@interface CAMCaptureConfiguration : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long device;
@property (readonly, nonatomic) long long videoConfiguration;
@property (readonly, nonatomic) long long audioConfiguration;
@property (readonly, nonatomic) long long flashMode;
@property (readonly, nonatomic) long long torchMode;
@property (readonly, nonatomic) long long HDRMode;
@property (readonly, nonatomic) long long timerDuration;
@property (readonly, nonatomic) long long irisMode;
@property (readonly, nonatomic) long long photoModeAspectRatioCrop;
@property (readonly, nonatomic) long long photoModeEffectFilterType;
@property (readonly, nonatomic) long long squareModeEffectFilterType;
@property (readonly, nonatomic) long long portraitModeEffectFilterType;
@property (readonly, nonatomic) long long portraitModeLightingEffectType;
@property (readonly, nonatomic) NSDictionary *exposureBiasesByMode;
@property (readonly, nonatomic) double portraitModeApertureValue;
@property (readonly, nonatomic) double portraitModeIntensityValue;
@property (nonatomic) BOOL mirrorFrontCameraCaptures;
@property (readonly, nonatomic) long long macroMode;
@property (readonly, nonatomic) long long rawMode;
@property (readonly, nonatomic) long long proResVideoMode;
@property (retain, nonatomic) NSArray *semanticStyles;
@property (nonatomic) unsigned long long selectedSemanticStyleIndex;
@property (readonly, nonatomic, getter=isPhotoBooth) BOOL photoBooth;
@property (readonly, nonatomic) long long videoStabilizationMode;
@property (readonly, nonatomic) BOOL zoomPIPEnabled;
@property (nonatomic) long long sharedLibraryMode;

+ (id)captureGraphConfigurationUsingConfiguration:(id)a0 outputToExternalStorage:(BOOL)a1;
+ (id)tinyConfigurationForConfiguration:(id)a0 preserveFilters:(BOOL)a1;
+ (long long)audioConfigurationForMode:(long long)a0 device:(long long)a1 emulationMode:(long long)a2 duringCall:(BOOL)a3 forceMonoAudioRecording:(BOOL)a4;
+ (long long)_fallbackVideoConfigurationForUnsupportedConfiguration:(long long)a0;
+ (id)configuration:(id)a0 withDevice:(long long)a1;
+ (long long)sanitizeVideoConfigurationForDesiredConfiguration:(long long)a0 mode:(long long)a1 device:(long long)a2;

- (id)initForPhotoBoothWithCaptureDevice:(long long)a0;
- (id)_previewFilters;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCaptureMode:(long long)a0 captureDevice:(long long)a1 videoConfiguration:(long long)a2 audioConfiguration:(long long)a3 flashMode:(long long)a4 torchMode:(long long)a5 HDRMode:(long long)a6 irisMode:(long long)a7 timerDuration:(long long)a8 photoModeAspectRatioCrop:(long long)a9 photoModeEffectFilterType:(long long)a10 squareModeEffectFilterType:(long long)a11 portraitModeEffectFilterType:(long long)a12 portraitModeLightingEffectType:(long long)a13 portraitModeApertureValue:(double)a14 portraitModeIntensityValue:(double)a15 mirrorFrontCameraCaptures:(BOOL)a16 exposureBiasesByMode:(id)a17 macroMode:(long long)a18 rawMode:(long long)a19 proResVideoMode:(long long)a20 semanticStyles:(id)a21 selectedSemanticStyleIndex:(unsigned long long)a22 videoStabilizationMode:(long long)a23 zoomPIPEnabled:(BOOL)a24 sharedLibraryMode:(long long)a25;

@end
