@interface FlowAdaptationFeatureExtractor : FeatureExtractor

- (id)initWithMode:(long long)a0;
- (BOOL)extractFeaturesFromImage:(struct __CVBuffer { } *)a0 toFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; } *)a1 callback:(id /* block */)a2;
- (void)getOutputTensorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a0 level:(unsigned int)a1;
- (void)setupNetworkModel;

@end
