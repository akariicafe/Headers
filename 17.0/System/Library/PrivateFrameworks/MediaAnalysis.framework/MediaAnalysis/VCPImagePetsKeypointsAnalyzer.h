@class NSMutableArray, VCPCNNPetsDetectorV2, VCPCNNPetsKeypointsDetector;

@interface VCPImagePetsKeypointsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    int _inputWidth;
    int _inputHeight;
    VCPCNNPetsDetectorV2 *_petsDetector;
    VCPCNNPetsKeypointsDetector *_petsKeypointsDetector;
    NSMutableArray *_results;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 petsDetections:(id)a2 results:(id *)a3 cancel:(id /* block */)a4;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;

@end
