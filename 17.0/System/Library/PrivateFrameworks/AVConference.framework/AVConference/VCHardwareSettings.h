@class NSMutableSet, NSMutableDictionary;

@interface VCHardwareSettings : NSObject {
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
    BOOL _isSiriVoiceTapSupported;
    BOOL _isSiriVoicePlayoutSupported;
}

@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) BOOL isVideoRenderingSupported;
@property (readonly, nonatomic) NSMutableSet *pixelFormatCollections;
@property (readonly, nonatomic) BOOL isSiriVoiceTapSupported;
@property (readonly, nonatomic) BOOL isSiriVoicePlayoutSupported;
@property (readonly, nonatomic) BOOL isMLEnhanceOneToOneSupported;

+ (BOOL)isAppleSilicon;
+ (BOOL)supportsHEIFEncoding;
+ (unsigned int)screenWidth;
+ (long long)deviceClass;
+ (unsigned int)screenHeight;
+ (BOOL)supportsHEVCEncoding;
+ (unsigned int)builtinMicCount;
+ (BOOL)isVoiceProcessingAt24KSupported;
+ (BOOL)allowScreenShareResolutionModuloAdjustment;
+ (BOOL)disableMLScalarDuringSharing;
+ (BOOL)disableViewPointCorrectionForSharing;
+ (id)featureListStringForPayload:(int)a0 mode:(int)a1 version:(long long)a2;
+ (BOOL)isCaptionsSupported;
+ (BOOL)isCaptureSIFRPreferred;
+ (BOOL)isCellularTappingSupported;
+ (BOOL)isDeviceLargeScreen;
+ (BOOL)isDisplayPortrait;
+ (BOOL)isExternalCameraSupported;
+ (BOOL)isMLEnhanceOneToOneSupported;
+ (BOOL)isMediaRecordingSupported;
+ (BOOL)isRemoteCameraSenderSupported;
+ (BOOL)isSiriVoicePlayoutSupported;
+ (BOOL)isSiriVoiceTapSupported;
+ (BOOL)isSpatialAudioSupported;
+ (BOOL)isVideoRenderingSupported;
+ (BOOL)isViewPointCorrectionSupported;
+ (BOOL)limitCameraDownlinkBitrateDuringSharing;
+ (unsigned int)maxActiveScreenEncoders;
+ (unsigned int)maxActiveVideoDecoders;
+ (unsigned int)maxActiveVideoEncoders;
+ (unsigned int)maxFpsCameraCaptureDuringSharing;
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;
+ (unsigned int)maxFrameRateSupportedScreenShare;
+ (unsigned int)maxHighTierMLEnhanceParticipants;
+ (unsigned int)maxMultiwayFramerateSupported;
+ (unsigned int)maxOneToOneFramerateSupported;
+ (unsigned int)maxRemoteParticipants30fps;
+ (unsigned long long)maxScreenEncodingSizeSupported;
+ (unsigned int)maxVCPSupportedTemporalLayers;
+ (BOOL)preferPresentationTimestamp;
+ (double)previewPreferredAspectRatio;
+ (BOOL)retainPixelBufferForMediaRecordingEnabled;
+ (unsigned int)screenHeightForDisplayID:(unsigned int)a0;
+ (long long)screenShareCapabilities;
+ (unsigned int)screenWidthForDisplayID:(unsigned int)a0;
+ (BOOL)shouldEnforceScreenFrameRateLimit;
+ (BOOL)shouldOverrideGPUMuxing;
+ (id)supportedVideoPayloads;
+ (BOOL)supportsDedicatedSystemAudioStream;
+ (BOOL)supportsFilteredScreenCapture;
+ (BOOL)supportsHEVCDecoding;
+ (BOOL)supportsMultiway1080pStream;
+ (BOOL)supportsMultiway720pStream;
+ (BOOL)supportsScreenCapture;
+ (BOOL)supportsSystemAudioTap;
+ (id)virtualHardwareSettings:(id)a0;

- (id)init;
- (void)dealloc;
- (id)featureListStringForPayload:(int)a0 mode:(int)a1 version:(long long)a2;
- (BOOL)isHEVCDecodeSupported:(int)a0;
- (BOOL)isHEVCEncodeSupported:(int)a0;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)a0 isLowLatencyAudio:(BOOL)a1;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)a0;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)tilesPerVideoFrame:(int)a0;
- (unsigned int)tilesPerVideoFrame:(int)a0 hdrMode:(unsigned long long)a1;

@end
