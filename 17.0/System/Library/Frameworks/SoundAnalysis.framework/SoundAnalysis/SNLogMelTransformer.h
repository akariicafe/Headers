@interface SNLogMelTransformer : NSObject {
    struct unique_ptr<LogMelTransformer, std::default_delete<LogMelTransformer>> { struct __compressed_pair<LogMelTransformer *, std::default_delete<LogMelTransformer>> { struct LogMelTransformer *__value_; } __ptr_; } _logMelTransformer;
}

@property (readonly) long long bandCount;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)transform:(const float *)a0 into:(float *)a1;
- (id)initWithFrameCount:(unsigned int)a0 sampleRate:(double)a1;

@end
