@interface AVCaptureVideoSettingsValidator : NSObject

+ (BOOL)validateVideoSettings:(id)a0 allowingFeatures:(unsigned long long)a1 validPixelKeys:(id)a2 validPixelFormats:(id)a3 validCodecKeys:(id)a4 validCodecs:(id)a5 exceptionReason:(id *)a6;

@end
