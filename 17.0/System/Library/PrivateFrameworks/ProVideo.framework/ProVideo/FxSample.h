@interface FxSample : NSObject {
    struct FxSamplePriv { double x0; id x1; id x2; id x3; } *_priv;
}

+ (id)_requiredSamplesForSamples:(id)a0;

- (double)time;
- (void)setTime:(double)a0;
- (id)init;
- (void)setStream:(id)a0;
- (void)dealloc;
- (id)context;
- (id)stream;
- (void)setContext:(id)a0;
- (id)regionOfInterest;
- (void)setRegionOfInterest:(id)a0;
- (BOOL)isPredetermined;
- (id)requiredSamples;
- (id)domainOfDefinition;
- (id)evaluateWithOptions:(id)a0;
- (unsigned long long)fieldOrder;
- (BOOL)supportsContextType:(int)a0;

@end
