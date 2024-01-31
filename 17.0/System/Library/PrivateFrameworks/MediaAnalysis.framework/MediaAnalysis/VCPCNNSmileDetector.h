@interface VCPCNNSmileDetector : NSObject

+ (id)detector;

- (int)computeSmileScore:(float *)a0;
- (int)detectSmileForFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBuffer:(struct __CVBuffer { } *)a1 smile:(BOOL *)a2;
- (float *)getInputBuffer;

@end
