@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {
    MPSMatrix *singleGateZ;
    BOOL _isTemporary;
}

- (void)dealloc;
- (BOOL)isTemporary;
- (void)setReadCount:(unsigned long long)a0;
- (id)initForSingleGateWithCommandBuffer:(id)a0 matrixDescriptor:(id)a1 isTemporary:(BOOL)a2;

@end
