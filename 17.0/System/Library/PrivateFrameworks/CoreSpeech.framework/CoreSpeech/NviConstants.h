@interface NviConstants : NSObject

+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)numChannelsForNviDirectionality;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })allChannelsLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })allChannelsLpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })monoChannelLpcmASBD;
+ (unsigned int)nviDirectionalityEndingChannelId;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })nviDirectionalityLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })nviDirectionalityLpcmNonInterleavedASBD;
+ (unsigned int)nviDirectionalityStartingChannelId;
+ (id)nviLogsRootDir;

@end
