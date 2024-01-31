@interface VCPGaborFilter : NSObject {
    struct Kernel **_filterBanks;
    int _numScales;
    int _numOrientations;
    int _num;
}

- (void)dealloc;
- (int)createGaborFilterKernel:(struct Kernel { float *x0; unsigned long long x1; unsigned long long x2; })a0 sigmaX:(float)a1 sigmaY:(float)a2 lambda:(float)a3 thetaInDegree:(float)a4 phaseInDegree:(float)a5;
- (id)initWithNumberOfScales:(int)a0 numOfOrientations:(int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (int)processWithFilterScaleIdx:(int)a0 orientIdx:(int)a1 srcImage:(const float *)a2 outImage:(float *)a3 width:(unsigned long long)a4 height:(unsigned long long)a5;

@end
