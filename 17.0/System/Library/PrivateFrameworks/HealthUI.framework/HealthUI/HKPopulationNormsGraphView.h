@class UIFont, NSString, UILabel, HKPopulationNormsChartGridView, UIView, NSMutableArray, NSNumber, UIColor;

@interface HKPopulationNormsGraphView : UIView

@property (nonatomic) double maxChartYValue;
@property (nonatomic) double minChartYValue;
@property (copy, nonatomic) NSString *ySeriesTitle;
@property (copy, nonatomic) NSString *xSeriesTitle;
@property (readonly, nonatomic) UIFont *seriesTitleFont;
@property (readonly, nonatomic) UIColor *highlightedSegmentColor;
@property (retain, nonatomic) UILabel *ySeriesTitleLabel;
@property (retain, nonatomic) UILabel *xSeriesTitleLabel;
@property (retain, nonatomic) NSMutableArray *ageBucketBarViews;
@property (retain, nonatomic) HKPopulationNormsChartGridView *gridView;
@property (retain, nonatomic) NSNumber *currentViewWidth;
@property (nonatomic) unsigned long long sexSegmentIndex;
@property (nonatomic) unsigned long long classificationIndex;
@property (retain, nonatomic) UIView *latestSampleHighlightView;
@property (retain, nonatomic) NSNumber *ageBucketIndex;
@property (retain, nonatomic) NSNumber *latestSampleValue;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)_highlightIndexForClassificationIndex:(unsigned long long)a0 numberOfSegments:(unsigned long long)a1;
- (void)_updateUserValueChartPointIfNecessary;
- (id)initWithMaxYValue:(double)a0 minYValue:(double)a1 YSeriesTitle:(id)a2 XSeriesTitle:(id)a3 highlightedSegmentColor:(id)a4;
- (void)updateWithFlattenedLevelsByAgeBucket:(id)a0 currentClassificationIndex:(unsigned long long)a1;
- (void)updateWithUserAgeBucketIndex:(id)a0 userLatestSampleValue:(id)a1;

@end
