@class EDResources, CHDChartType, CMDrawableMapper, CHDChart, CMState, CHDSeries, CHDAxis;

@interface EMChartMapper : CMMapper {
    CHDChart *mChart;
    CMState *mState;
    EDResources *mResources;
    CHDChartType *mMainType;
    CHDSeries *mMainSeries;
    CHDAxis *mBaseAxis;
    CHDAxis *mPrimaryAxis;
    CHDAxis *mSecondaryAxis;
    BOOL mIsHorizontal;
    BOOL mIsStacked;
    BOOL mIsPercentStacked;
    unsigned long long mPieIndex;
    struct { BOOL primaryCategoryHasDates; BOOL secondaryCategoryHasDates; BOOL primaryAxisHasDates; BOOL secondaryAxisHasDates; } mPlotInfos;
    BOOL mHasDateCategory;
    BOOL mHasPrimaryDateAxis;
    BOOL mHasSecondaryDateAxis;
}

@property (readonly, weak) CMDrawableMapper *parent;

+ (struct CGColor { } *)newColorWithCalibratedRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;

- (void).cxx_destruct;
- (void)_addGraphicProperties:(id)a0 toDescription:(id)a1 withState:(id)a2;
- (void)_addStandardSeries:(id)a0 toDescription:(id)a1 withState:(id)a2;
- (void)_addUnitAxis:(id)a0 series:(id)a1 state:(id)a2 toDescription:(id)a3;
- (void)_addCategoryAxis:(id)a0 series:(id)a1 state:(id)a2 toDescription:(id)a3;
- (void)addBackgroundToDescription:(id)a0 withState:(id)a1;
- (void)addLegendToDescription:(id)a0 chartSize:(struct CGSize { double x0; double x1; })a1 withState:(id)a2;
- (void)addSeries:(id)a0 toDescription:(id)a1 withState:(id)a2;
- (void)addTitleToDescription:(id)a0 withState:(id)a1;
- (id)copyPdfWithState:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)dateFromXlDateTimeNumber:(double)a0;
- (id)initWithChart:(id)a0 parent:(id)a1;

@end
