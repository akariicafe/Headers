@class NSUUID, CSAudioInjectionFileOption, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate, OS_dispatch_source;

@interface CSAudioInjectionEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSAudioInjectionEngineDelegate> delegate;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (retain, nonatomic) CSAudioInjectionFileOption *fileOption;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } outASBD;
@property (nonatomic) double bufferDuration;
@property (retain, nonatomic) NSMutableArray *injectionAudioFileList;
@property (retain, nonatomic) NSMutableArray *injectionStartNotifyBlocks;
@property (retain, nonatomic) NSMutableArray *injectionCompletionNotifyBlocks;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) struct OpaqueAudioConverter { } *deinterleaver;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *pNonInterleavedABL;
@property (nonatomic) BOOL didSetScaleFactor;
@property (nonatomic) float scaleFactor;
@property (nonatomic) unsigned int inputRecordingNumberOfChannels;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)injectAudio:(id)a0 withScaleFactor:(float)a1 outASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2 playbackStarted:(id /* block */)a3 completion:(id /* block */)a4;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })_defaultOutASBD;
- (BOOL)isAlwaysOnVoiceTriggerAvailable;
- (void)setAlwaysOnVoiceTriggerEnabled:(BOOL)a0;
- (void)stopAudioStream;
- (id)_compensateChannelDataIfNeeded:(id)a0 receivedNumChannels:(unsigned int)a1;
- (void)_createDeInterleaverIfNeeded;
- (id)_deinterleaveBufferIfNeeded:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (void)_readAudioBufferAndFeed;
- (void)_startAudioFeedingTimer;
- (BOOL)alwaysOnVoiceTriggerEnabled;
- (void)attachDevice:(id)a0;
- (id)initWithStreamHandleId:(unsigned long long)a0;
- (id)initWithStreamHandleId:(unsigned long long)a0 withInputRecordingNumberOfChannels:(unsigned int)a1;
- (BOOL)injectAudio:(id)a0;
- (BOOL)injectAudio:(id)a0 withScaleFactor:(float)a1 playbackStarted:(id /* block */)a2 completion:(id /* block */)a3;
- (void)setUserIntentOptions:(id)a0;
- (void)startAudioStreamWithOption:(id)a0;

@end
