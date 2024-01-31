@interface TSULinearRegressionModel : TSURegressionModel {
    double *mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    double mIntercept;
    double *mCoefficientsStandardErrors;
    double mRSquared;
    double mStandardError;
    double mFStatistic;
    double mDegreesFreedom;
    double mRegressionSumSquares;
    double mErrorSumSquares;
}

- (void)dealloc;
- (double)standardError;
- (double)rSquared;
- (double)errorSumSquares;
- (double)coefficientAtIndex:(int)a0;
- (double)coefficientStandardErrorAtIndex:(int)a0;
- (double)degreesFreedom;
- (double)fStatistic;
- (id)initAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3;
- (id)initNonAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 desiredIntercept:(double)a4;
- (double)regressionSumSquares;
- (double)estimateForX:(double *)a0;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)a0;
- (int)numCoefficients;
- (id)initWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 makeAffine:(BOOL)a4 desiredIntercept:(double)a5;
- (int)regressionType;

@end
