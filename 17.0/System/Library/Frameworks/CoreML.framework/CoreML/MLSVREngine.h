@interface MLSVREngine : NSObject

@property struct svm_model { struct svm_parameter { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; int x8; int *x9; double *x10; double x11; double x12; int x13; int x14; } x0; int x1; int x2; struct svm_node **x3; double **x4; double *x5; double *x6; double *x7; int *x8; int *x9; int *x10; int x11; } *model;
@property BOOL freeModelOnDealloc;
@property (readonly) BOOL isInputSizeLowerBoundOnly;
@property (readonly) unsigned long long inputSize;

- (void)dealloc;
- (id)predict:(id)a0;
- (void)fillSVMNodeVector:(struct svm_node { int x0; double x1; } *)a0 values:(const double *)a1 count:(unsigned long long)a2;
- (struct svm_node { int x0; double x1; } *)allocSVMNodeVector:(unsigned long long)a0;
- (void)deallocSVMNodeVector:(struct svm_node { int x0; double x1; } *)a0;
- (id)initWithLibSVMFile:(id)a0;
- (id)initWithSVMModel:(struct svm_model { struct svm_parameter { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; int x8; int *x9; double *x10; double x11; double x12; int x13; int x14; } x0; int x1; int x2; struct svm_node **x3; double **x4; double *x5; double *x6; double *x7; int *x8; int *x9; int *x10; int x11; } *)a0 freeOnDealloc:(BOOL)a1 isInputSizeLowerBoundOnly:(BOOL)a2 inputSize:(unsigned long long)a3;
- (id)initWithSpecification:(void *)a0 error:(id *)a1;

@end
