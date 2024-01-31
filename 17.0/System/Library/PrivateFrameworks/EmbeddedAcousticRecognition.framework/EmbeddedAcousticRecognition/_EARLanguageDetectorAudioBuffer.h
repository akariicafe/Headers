@interface _EARLanguageDetectorAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBuffer> { struct RecogAudioBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } _buffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endAudio;
- (id)_initWithAudioBuffer:(const void *)a0;
- (void)addAudioSampleData:(id)a0;
- (void)addAudioSamples:(const short *)a0 count:(unsigned long long)a1;

@end
