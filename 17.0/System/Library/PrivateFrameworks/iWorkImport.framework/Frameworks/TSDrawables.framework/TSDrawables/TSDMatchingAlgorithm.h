@class NSMutableArray;

@interface TSDMatchingAlgorithm : NSObject {
    long long *mCostMatrix;
    char *mMaskMatrix;
    BOOL *mIsStarInColumn;
    BOOL *mIsStarInRow;
    BOOL *mIsColCovered;
    BOOL *mIsRowCovered;
    NSMutableArray *mObjectMapping;
    long long mMatrixDimension;
    long long mZ0Row;
    long long mZ0Col;
    NSMutableArray *mResults;
}

+ (id)bestMatchesFromArray:(id)a0;

- (void).cxx_destruct;
- (int)p_step4IndexOfStarredZeroInRow:(int)a0;
- (void)p_allocateMatrices;
- (id)p_bestMatchesFromArray:(id)a0;
- (void)p_deallocateMatrices;
- (int)p_doStep1;
- (int)p_doStep2;
- (int)p_doStep3;
- (int)p_doStep4;
- (int)p_doStep5;
- (int)p_doStep6;
- (BOOL)p_step4FindAZeroAndReturnRow:(int *)a0 column:(int *)a1;

@end
