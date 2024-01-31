@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    BOOL mCategoryAxesReversed;
    BOOL mCategoryAxesReversedOverridden;
    BOOL mContainsVolumeStockType;
}

- (id)description;
- (void).cxx_destruct;
- (id)axes;
- (id)chartTypes;
- (BOOL)containsVolumeStockType;
- (id)graphicProperties;
- (BOOL)hasSecondaryAxis;
- (BOOL)hasSecondaryYAxisDeleted;
- (id)initWithChart:(id)a0;
- (BOOL)isCategoryAxesReversed:(BOOL)a0;
- (void)markSecondaryAxes;
- (void)setContainsVolumeStockType:(BOOL)a0;
- (void)setGraphicProperties:(id)a0;

@end
