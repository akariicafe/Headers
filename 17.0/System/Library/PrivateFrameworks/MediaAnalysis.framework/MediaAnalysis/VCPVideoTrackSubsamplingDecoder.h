@class AVAssetReaderTrackOutput, AVAssetReader;

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _decodeEnd;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sampleDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextSampleTime;
    struct opaqueCMSampleBuffer { } *_currentSample;
    struct opaqueCMSampleBuffer { } *_nextSample;
}

- (void)dealloc;
- (long long)status;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { } *)getNextCaptureSampleBuffer;
- (id)initWithTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 atInterval:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;

@end
