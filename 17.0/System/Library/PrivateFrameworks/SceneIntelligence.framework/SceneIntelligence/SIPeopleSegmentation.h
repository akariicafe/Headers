@interface SIPeopleSegmentation : SIModel {
    struct __CVBuffer { } *_temporalBuffer;
    int _frameCount;
}

@property (nonatomic) unsigned char snapEveryFrameCount;

+ (struct CGSize { double x0; double x1; })getOutputResolution;
+ (struct CGSize { double x0; double x1; })getInputResolution;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)a0;
- (BOOL)_initTemporalBuffer;
- (long long)copyResultsToData:(id)a0;
- (long long)evaluateForInput:(id)a0 output:(id)a1;
- (long long)evaluateForInput:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (BOOL)switchNetworkConfiguration:(long long)a0;

@end
