@protocol MTLBuffer;

@interface MPSParallelRandomMTGP32 : MPSParallelRandom {
    id<MTLBuffer> _state;
    id<MTLBuffer> _pShift1;
    id<MTLBuffer> _pShift2;
    id<MTLBuffer> _pMR;
    id<MTLBuffer> _pMT;
    id<MTLBuffer> _pM;
    id<MTLBuffer> _pStateIdx;
    float _bernoulliParameter;
    float _uniformMin;
    float _uniformMax;
    float _normalMean;
    float _normalStandardDeviation;
}

- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 destinationDataType:(unsigned int)a1 seed:(unsigned long long)a2 distributionDescriptor:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 computeEncoder:(id)a1 destinationBuffer:(id)a2 destinationOffset:(unsigned long long)a3 numEntries:(unsigned long long)a4;
- (void)encodeToCommandBuffer:(id)a0 computeEncoder:(id)a1 destinationBuffer:(id)a2 destinationOffset:(unsigned long long)a3 numEntries:(unsigned long long)a4 stride:(unsigned int)a5;
- (id)exportState;
- (id)initWithDevice:(id)a0 destinationDataType:(unsigned int)a1 seed:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 destinationDataType:(unsigned int)a1 state:(id)a2 distributionDescriptor:(id)a3;
- (void)reinitializeDistributionDescriptor:(id)a0;
- (void)resetSeedOnCommandBuffer:(id)a0 seed:(unsigned long long)a1;
- (void)synchronizeStateOnCommandBuffer:(id)a0;

@end
