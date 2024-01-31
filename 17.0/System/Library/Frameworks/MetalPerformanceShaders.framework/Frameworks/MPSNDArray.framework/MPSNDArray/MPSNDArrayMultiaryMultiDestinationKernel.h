@interface MPSNDArrayMultiaryMultiDestinationKernel : MPSNDArrayMultiaryMultiDestinationBase {
    void /* function */ *_encode;
}

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArrays:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArrays:(id)a3 activeDestinationMask:(unsigned int)a4;
- (void)encodeToCommandBuffer:(id)a0 sourceArrays:(id)a1 destinationArrays:(id)a2;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1 destinationCount:(unsigned long long)a2;

@end
