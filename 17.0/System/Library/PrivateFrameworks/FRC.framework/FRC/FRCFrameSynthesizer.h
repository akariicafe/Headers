@class FRCImageProcessor, NSObject;
@protocol OS_os_log, FRCSynthesis;

@interface FRCFrameSynthesizer : NSObject {
    BOOL _resourcePreAllocated;
    long long _usage;
    id<FRCSynthesis> _synthesis;
    FRCImageProcessor *_processor;
    unsigned long long _width;
    unsigned long long _height;
    BOOL _featureCreated;
    long long _inputRotation;
    NSObject<OS_os_log> *_logger;
}

- (void)releaseResources;
- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateResources;
- (id)initWithUsage:(long long)a0;
- (BOOL)checkForwardFlow:(struct __CVBuffer { } *)a0 backwardFlow:(struct __CVBuffer { } *)a1;
- (BOOL)configureSynthesisWithMode:(long long)a0;
- (id)errorWithErrorCode:(long long)a0;
- (id)initWithUsage:(long long)a0 qualityMode:(long long)a1;
- (void)setFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3;
- (void)synthesizeFrameForTimeScale:(float)a0 destination:(struct __CVBuffer { } *)a1;
- (void)synthesizeFrameFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 timeScale:(float)a4 destination:(struct __CVBuffer { } *)a5;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 numberOfFrames:(unsigned long long)a4 withError:(id *)a5;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 timeScales:(id)a4 withError:(id *)a5;

@end
