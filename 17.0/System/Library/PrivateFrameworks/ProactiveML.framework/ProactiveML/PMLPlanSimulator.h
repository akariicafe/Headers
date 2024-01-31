@class NSArray, PMLSessionDescriptor, _PASRng;

@interface PMLPlanSimulator : NSObject {
    NSArray *_stores;
    PMLSessionDescriptor *_sessionDescriptor;
    _PASRng *_rng;
}

+ (id)simulatorWithDbPaths:(id)a0 sessionDescriptor:(id)a1 sessionsInBatch:(unsigned long long)a2 maxSessionsLimit:(unsigned long long)a3 seed:(unsigned long long)a4;

- (id)init;
- (void).cxx_destruct;
- (id)_randomStore;
- (id)_randomStores:(unsigned long long)a0;
- (id)initWithStores:(id)a0 sessionDescriptor:(id)a1 seed:(unsigned long long)a2;
- (id)runParallelPlansWithPlanId:(id)a0 tracker:(id)a1 noiseScaleFactors:(struct { float x0; float x1; })a2 noiseMinimumMagnitude:(float)a3 weights:(id)a4 serverIteration:(unsigned long long)a5 useIntercept:(BOOL)a6 noiseMechanism:(long long)a7 usingRandomlySelected:(unsigned long long)a8;

@end
