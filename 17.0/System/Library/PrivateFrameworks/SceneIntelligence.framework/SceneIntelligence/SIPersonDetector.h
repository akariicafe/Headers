@class SIPersonDetectorNetworkConfiguration;

@interface SIPersonDetector : SIModel {
    SIPersonDetectorNetworkConfiguration *_configuration;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)a0;
- (long long)copyResultsToData:(id)a0;
- (long long)evaluateForInput:(struct __CVBuffer { } *)a0;
- (long long)evaluateForInput:(id)a0 output:(id)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;

@end
