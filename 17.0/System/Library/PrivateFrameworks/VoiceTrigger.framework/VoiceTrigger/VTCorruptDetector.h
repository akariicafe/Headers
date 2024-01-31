@interface VTCorruptDetector : NSObject {
    int _zeroSamplesCount;
    int _maxZeroSamplesCount;
}

- (id)init;
- (void)reset;
- (void)analyze:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0;
- (BOOL)audioHasZeroRun;
- (int)getMaxZeroSampleCount;

@end
