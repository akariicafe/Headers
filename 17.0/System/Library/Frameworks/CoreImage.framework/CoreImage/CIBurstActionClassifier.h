@interface CIBurstActionClassifier : NSObject {
    BOOL hasBeenScaled;
    double testVector[7];
}

@property float testMaxInnerDistance;
@property float testInOutRatio;
@property float testMaxPeakRegistrationError;
@property float testMeanPeakRegistrationError;
@property float testMinRegionOfInterestSize;
@property float testMaxRegistrationErrorSkewness;
@property float testMaxRegistrationErrorIntegral;
@property float testAverageCameraTravelDistance;
@property float testAverageRegistrationErrorSkewness;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property struct __SVMParameters { struct __SVMScaleOffset { float x0; float x1; } x0[7]; double x1; double x2; int x3; int x4; struct CIBurstSupportVector *x5; struct CIBurstSupportVector *x6; } *svmParameters;

- (id)init;
- (id)initWithVersion:(int)a0;
- (double)computeKernelValueWithSupportVector:(const struct CIBurstSupportVector { double x0; double x1[7]; } *)a0;
- (BOOL)isBurstAction;
- (float)predictResult;
- (void)scaleVector;

@end
