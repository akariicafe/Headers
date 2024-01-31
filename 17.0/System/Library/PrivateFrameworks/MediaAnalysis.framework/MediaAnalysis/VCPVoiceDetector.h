@class NSDictionary, NSMutableArray;

@interface VCPVoiceDetector : NSObject {
    NSDictionary *_model;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioStream;
    int _sampleBatchSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _trackStart;
    BOOL _voiceActivity;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _voiceStart;
    NSMutableArray *_utteranceDetections;
    NSMutableArray *_musicDetections;
}

@property (retain) NSMutableArray *voiceDetections;

+ (id)detector;

- (id)init;
- (id)results;
- (void).cxx_destruct;
- (int)loadModel;
- (void)addDetectionFromTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 toTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 result:(id)a2;
- (id)audioFormatRequirements;
- (int)finalizeAnalysisAtTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 timestamp:(struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })a1;
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (int)setupWithSample:(struct opaqueCMSampleBuffer { } *)a0 andSampleBatchSize:(int)a1;

@end
