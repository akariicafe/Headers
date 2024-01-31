@class NSObject;
@protocol ADEspressoRunnerProtocol;

@interface ADEspressoRunner : NSObject <ADEspressoRunnerProtocol> {
    NSObject<ADEspressoRunnerProtocol> *_espressoRunner;
}

- (long long)execute;
- (void).cxx_destruct;
- (id)networkVersionString;
- (struct __CVBuffer { } *)createAndRegisterPixelBufferForDescriptor:(id)a0;
- (id)initWithPath:(id)a0 forEngine:(unsigned long long)a1 configurationName:(id)a2;
- (id)registerDescriptor:(id)a0;
- (long long)registerPixelBuffer:(struct __CVBuffer { } *)a0 forDescriptor:(id)a1;
- (long long)updateFeedbackLoopInputBuffer:(struct __CVBuffer **)a0 inputDescriptor:(id)a1 outputBuffer:(struct __CVBuffer **)a2 outputDescriptor:(id)a3;
- (long long)registerIOSurface:(struct __IOSurface { } *)a0 forDescriptor:(id)a1;

@end
