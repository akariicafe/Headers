@class MPSImageLaplacian;

@interface SILaplacian : NSObject {
    MPSImageLaplacian *_laplacianOperator;
}

- (id)init;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;

@end
