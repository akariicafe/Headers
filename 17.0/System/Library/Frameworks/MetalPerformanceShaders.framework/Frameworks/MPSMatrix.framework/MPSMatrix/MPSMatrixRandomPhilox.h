@class MPSParallelRandomPhilox;

@interface MPSMatrixRandomPhilox : MPSMatrixRandom {
    MPSParallelRandomPhilox *_parallelFilter;
}

- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 destinationDataType:(unsigned int)a1 seed:(unsigned long long)a2 distributionDescriptor:(id)a3;
- (id)initWithDevice:(id)a0 destinationDataType:(unsigned int)a1 seed:(unsigned long long)a2;
- (void)encodeToCommandBuffer:(id)a0 destinationMatrix:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 destinationVector:(id)a1;

@end
