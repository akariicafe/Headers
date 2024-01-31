@interface VCPayloadUtils : NSObject

+ (unsigned int)internalBundleFactorForPayload:(int)a0;
+ (double)blockSizeForPayload:(int)a0 sampleRate:(unsigned int)a1;
+ (id)allowedBitratesForPayload:(int)a0 supportedBitrates:(id)a1 supportedBandwidths:(id)a2;
+ (int)audioCodecBandwidthForVCAudioCodecBandwidth:(int)a0;
+ (unsigned int)audioCodecTypeForPayload:(int)a0;
+ (unsigned int)bitrateForAMRCodecMode:(int)a0;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)a0;
+ (unsigned int)bitrateForCodecType:(long long)a0 mode:(int)a1;
+ (unsigned int)bitrateForEVSCodecMode:(int)a0;
+ (BOOL)canBundleExternallyForPayload:(int)a0 forBundlingScheme:(int)a1 operatingMode:(int)a2;
+ (BOOL)canSetBitrateForPayload:(int)a0;
+ (int)codecBandwidthForPayload:(int)a0;
+ (id)codecModesForAMR16kHz;
+ (id)codecModesForAMR8kHz;
+ (id)codecModesForEVS16kHz;
+ (id)codecModesForEVS32kHz;
+ (id)codecModesForEVS8kHz;
+ (int)codecRateModeForDesiredANBR:(unsigned int)a0 payload:(int)a1 supportedBitrates:(id)a2 supportedBandwidths:(id)a3;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)a0 blockSize:(double)a1;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)a0 blockSize:(double)a1 sampleRate:(unsigned int)a2;
+ (long long)codecTypeForPayload:(int)a0;
+ (long long)ctAudioCodecEVSBandwidthForAudioCodecBandwidth:(int)a0;
+ (long long)ctAudioCodecEVSBitrateForBitrate:(unsigned int)a0;
+ (long long)ctAudioCodecTypeForMediaStreamCodec:(long long)a0;
+ (BOOL)isAMRCodecModeSupported:(int)a0 forBandwidth:(int)a1;
+ (BOOL)isCodecModeSupported:(int)a0 forBandwidth:(int)a1 withPayload:(int)a2;
+ (BOOL)isEVSCodecModeSupported:(int)a0 forBandwidth:(int)a1;
+ (BOOL)isEVSPayload:(int)a0;
+ (BOOL)isFormatAACELDNonSBR48KHzStereo:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (BOOL)isOpus4Channel48KhzPayload:(int)a0 outFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1;
+ (BOOL)isPayloadSupportedInFaceTime:(int)a0;
+ (BOOL)isUseCaseWatchContinuity:(int)a0 primaryPayload:(int)a1;
+ (double)opusSamplesPerFrameForSampleRate:(unsigned int)a0 blockSize:(double)a1;
+ (int)payloadForCodecType:(long long)a0;
+ (float)qualityForPayload:(int)a0 forBitrate:(unsigned int)a1;
+ (unsigned int)sampleRateForCodecBandwidth:(int)a0;
+ (unsigned int)sampleRateForPayload:(int)a0;
+ (BOOL)shouldEnablePacketSizeLimitForAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (BOOL)shouldUseCookieForPayload:(int)a0;
+ (BOOL)skipBandWidthCheckForCodecRateModes:(int)a0 supportedBitrates:(id)a1;
+ (id)supportedCodecModesForBandwidth:(int)a0 payload:(int)a1;
+ (BOOL)supportsCodecBandwidthUpdateForCodecType:(long long)a0;
+ (BOOL)supportsCodecRateModesForCodecType:(long long)a0;
+ (int)vcAudioCodecBandwidthForAudioCodecBandwidth:(int)a0;

@end
