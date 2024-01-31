@interface CSConfig : NSObject

+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (float)inputRecordingSampleRate;
+ (float)remoteVADDuration;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned long long)channelForOutputReference;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (unsigned long long)serverLoggingChannelBitset;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (unsigned int)audioConverterBitrate;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (float)inputRecordingDurationInSecsExtended;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (float)daysBeforeRemovingLogFiles;
+ (float)inputRecordingSampleRateNarrowBand;
+ (float)inputRecordingDurationInSecs;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (double)inputRecordingBufferDuration;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned int)hearstNumberOfSamplesPerChunk;

@end
