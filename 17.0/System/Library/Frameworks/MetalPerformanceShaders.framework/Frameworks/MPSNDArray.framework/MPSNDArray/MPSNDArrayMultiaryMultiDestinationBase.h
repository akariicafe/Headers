@interface MPSNDArrayMultiaryMultiDestinationBase : MPSKernel {
    unsigned long long _srcCount;
    unsigned long long _dstCount;
    void *_encodeData;
}

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1 destinationCount:(unsigned long long)a2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;

@end
