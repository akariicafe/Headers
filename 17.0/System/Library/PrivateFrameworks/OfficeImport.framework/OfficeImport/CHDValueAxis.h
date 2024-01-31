@interface CHDValueAxis : CHDAxis {
    BOOL mPercentageFormattingFlag;
    BOOL mAutoMajorUnitValue;
    BOOL mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
    int mBuiltInUnit;
    BOOL mShowBuiltInUnit;
}

- (id)initWithResources:(id)a0;
- (void)setBuiltInUnit:(int)a0;
- (void)adjustAxisPositionForHorizontalChart;
- (int)builtInUnit;
- (id)contentFormatWithBuiltInUnit;
- (BOOL)isAutoMajorUnitValue;
- (BOOL)isAutoMinorUnitValue;
- (BOOL)isPercentageFormattingFlag;
- (BOOL)isShowBuiltInUnit;
- (double)majorUnitValue;
- (double)minorUnitValue;
- (double)scalingLogBase;
- (void)setMajorUnitValue:(double)a0;
- (void)setMinorUnitValue:(double)a0;
- (void)setPercentageFormattingFlag:(BOOL)a0;
- (void)setScalingLogBase:(double)a0;
- (void)setShowBuiltInUnitFlag:(BOOL)a0;

@end
