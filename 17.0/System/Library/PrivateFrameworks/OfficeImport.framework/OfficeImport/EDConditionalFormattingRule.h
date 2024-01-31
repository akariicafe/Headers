@class NSString, EDResources, NSMutableArray;

@interface EDConditionalFormattingRule : NSObject {
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned long long mDifferentialStyleIndex;
    BOOL mStopIfTrue;
    BOOL mAppliesToDateOnly;
    long long mPriority;
    BOOL mAboveAverage;
    BOOL mBottom;
    BOOL mEqualAverage;
    BOOL mPercent;
    unsigned long long mRank;
    long long mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)a0;

- (void)setType:(int)a0;
- (unsigned long long)rank;
- (void)setRank:(unsigned long long)a0;
- (void)setBottom:(BOOL)a0;
- (long long)priority;
- (void)setPriority:(long long)a0;
- (id)description;
- (BOOL)bottom;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (int)type;
- (id)initWithResources:(id)a0;
- (void)setTimePeriod:(int)a0;
- (int)timePeriod;
- (BOOL)percent;
- (void)setStdDev:(long long)a0;
- (long long)stdDev;
- (void)setPercent:(BOOL)a0;
- (id)formulaAtIndex:(unsigned long long)a0;
- (BOOL)aboveAverage;
- (void)addFormula:(id)a0 worksheet:(id)a1;
- (BOOL)appliesToDateOnly;
- (long long)compareToOtherRuleUsingPriority:(id)a0;
- (id)differentialStyle;
- (unsigned long long)differentialStyleIndex;
- (BOOL)equalAverage;
- (unsigned long long)formulaCount;
- (int)operatorEnum;
- (void)setAboveAverage:(BOOL)a0;
- (void)setAppliesToDateOnly:(BOOL)a0;
- (void)setDifferentialStyle:(id)a0;
- (void)setDifferentialStyleIndex:(unsigned long long)a0;
- (void)setEqualAverage:(BOOL)a0;
- (void)setOperatorEnum:(int)a0;
- (void)setStopIfTrue:(BOOL)a0;
- (BOOL)stopIfTrue;

@end
