@class NSString, NSObject;
@protocol OS_dispatch_queue, EARCaesuraSilencePosteriorGeneratorDelegate;

@interface EARCaesuraSilencePosteriorGenerator : NSObject {
    struct shared_ptr<quasar::SilencePosteriorGenerator> { struct SilencePosteriorGenerator *__ptr_; struct __shared_weak_count *__cntrl_; } _silenceGenerator;
    NSString *_configFile;
    unsigned long long _samplingRate;
    NSObject<OS_dispatch_queue> *_spgQueue;
}

@property (weak, nonatomic) id<EARCaesuraSilencePosteriorGeneratorDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endAudio;
- (void)_startComputeTask;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (long long)getFrameDurationMs;
- (id)initWithConfigFile:(id)a0;
- (id)initWithConfigFile:(id)a0 samplingRate:(unsigned long long)a1;
- (id)initWithConfigFile:(id)a0 samplingRate:(unsigned long long)a1 queue:(id)a2;
- (void)resetForNewRequest;

@end
