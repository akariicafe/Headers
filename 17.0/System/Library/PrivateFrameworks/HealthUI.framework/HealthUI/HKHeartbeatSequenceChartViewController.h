@class NSDate, NSMutableArray, HKAxis;

@interface HKHeartbeatSequenceChartViewController : HKScalarGraphViewController

@property (retain, nonatomic) NSMutableArray *sequenceDataSources;
@property (retain, nonatomic) NSMutableArray *graphSeries;
@property (retain, nonatomic) HKAxis *commonVerticalAxis;
@property (nonatomic) double initialXAxisOffset;
@property (readonly, nonatomic) NSDate *startDate;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_adjustGraphViewOptions;
- (id)_heartbeatSequenceSeriesForSource:(id)a0 axis:(id)a1 color:(id)a2 lineWidth:(double)a3 markerRadius:(double)a4 dashStyle:(long long)a5 annotate:(BOOL)a6;
- (void)_recomputeAxisRanges;
- (id)_verticalNumericalAxis;
- (void)addSequenceData:(id)a0;
- (void)addSequenceData:(id)a0 color:(id)a1 lineWidth:(double)a2 markerRadius:(double)a3 dashStyle:(long long)a4 annotate:(BOOL)a5;
- (id)graphView:(id)a0 graphSeriesForZoom:(long long)a1 stackOffset:(long long)a2;
- (void)graphViewSizeChanged:(id)a0;
- (id)initWithMinimumHeight:(double)a0;
- (id)initWithMinimumHeight:(double)a0 startDate:(id)a1;
- (long long)stackCountForGraphView:(id)a0;

@end
