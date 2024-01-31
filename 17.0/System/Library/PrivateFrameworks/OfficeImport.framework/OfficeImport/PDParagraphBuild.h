@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (void)setType:(int)a0;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (double)autoAdvanceTime;
- (id)addTimeNodeData;
- (int)buildLevel;
- (BOOL)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)a0;
- (void)setBuildLevel:(int)a0;
- (void)setIsReversedParagraphOrder:(BOOL)a0;
- (id)timeNodeDataAtIndex:(unsigned long long)a0;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;

@end
