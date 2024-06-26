@class ChartUpdater, NSMutableDictionary, UILabel, NSMutableArray, StockChartDisplayMode, ChartTitleLabel, DashedLineView, NSString, ChartHUDView, StockChartData, UIView, Stock, ChartIntervalButtonRow, NSArray, LoadingLabel, NSError, StocksViewController;
@protocol StockChartViewDelegate;

@interface StockChartView : UIView <ChartUpdaterDelegate, ChartIntervalButtonRowDelegate, StockGraphViewContainer, StockUpdateObserver> {
    LoadingLabel *_loadingLabel;
    ChartUpdater *_chartUpdater;
    ChartIntervalButtonRow *_intervalButtonRow;
    NSMutableArray *_axisViews;
    NSMutableArray *_xLabelViews;
    NSMutableArray *_yLabelViews;
    DashedLineView *_previousCloseLine;
    UILabel *_previousCloseLabel;
    ChartTitleLabel *_titleView;
    ChartHUDView *_HUDView;
    BOOL _animating;
    BOOL _layoutPending;
    UIView *_chartTopKeyline;
    UIView *_chartBottomKeyline;
    UIView *_xAxisKeyline;
    NSMutableArray *_displayModes;
    NSMutableDictionary *_graphViews;
}

@property (retain, nonatomic) StockChartDisplayMode *currentDisplayMode;
@property (weak, nonatomic) id<StockChartViewDelegate> chartViewDelegate;
@property (nonatomic) long long preferredInterval;
@property (weak, nonatomic) StocksViewController *controller;
@property (retain, nonatomic) Stock *stock;
@property (retain, nonatomic) StockChartData *chartData;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *alternateDisplayModes;
@property (nonatomic) BOOL drawsBottomLine;
@property (nonatomic) long long selectedInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGGradient { } *)LineBackgroundGradient;

- (void)layoutIfNeeded;
- (void)_layoutSubviews;
- (void)dealloc;
- (BOOL)isLoading;
- (void)reloadData;
- (void)resetLocale;
- (void)clearData;
- (double)horizontalPadding;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)forceLayout;
- (BOOL)isLandscape;
- (BOOL)hadError;
- (id)chartUpdater;
- (void)chartUpdater:(id)a0 didFailWithError:(id)a1;
- (void)chartUpdater:(id)a0 didReceiveStockChartData:(id)a1;
- (double)lineGraphBottomPadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineGraphFrame;
- (id)HUDView;
- (void)animateTransitionToDisplayMode:(id)a0;
- (void)_prepareXAxisLabelsAndPositions;
- (void)addDisplayMode:(id)a0;
- (void)renderGraphDataIfNeededForMode:(id)a0;
- (double)_evennessOfValue:(double)a0 inRange:(double)a1;
- (void)_layoutAxesAndXLabels;
- (void)_layoutIntervalButtonRow;
- (void)_layoutTopLabelsHidden:(BOOL)a0;
- (void)_layoutVolumeSeparatorLineForGraphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutYLabels;
- (void)_prepareYAxisLabelsAndPositionsForDisplayMode:(id)a0;
- (void)_setDayLabelsWithInterval:(unsigned int)a0 realTimePositions:(BOOL)a1;
- (void)_setHourLabels;
- (void)_setMonthAndYearLabels;
- (void)_setShowingLoadingStatus:(BOOL)a0;
- (void)chartIntervalButtonRow:(id)a0 didSelectChartInterval:(long long)a1;
- (void)createYLabelsForMode:(id)a0;
- (id)currentGraphView;
- (void)didTransitionToDisplayMode:(id)a0;
- (void)enumerateGraphsAndDisplayModesUsingBlock:(id /* block */)a0;
- (id)graphViewForMode:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })graphViewFrameForMode:(id)a0;
- (void)hideLabelsAxesAndGraphs;
- (void)hideOtherGraphViews;
- (id)initWithInitialDisplayMode:(id)a0 preferredChartInterval:(long long)a1 stockChartViewDelegate:(id)a2;
- (BOOL)isCurrentChart;
- (void)layoutGraphViews;
- (void)layoutLoadingStatus;
- (void)layoutPreviousClose;
- (long long)maxSupportedIntervalFromDesiredInterval:(long long)a0;
- (void)prepareForTransitionToDisplayMode:(id)a0;
- (void)reloadDataIfStale;
- (void)renderGraphDataIfNeeded;
- (void)setLabelsAndAxesAlpha:(double)a0;
- (void)setShowingHUD:(BOOL)a0;
- (BOOL)shouldShowLoadingStatus;
- (void)stockGraphViewReadyForDisplay:(id)a0;
- (void)updateChartViewForSelectedInterval;
- (void)updateHUDView;
- (double)widestYLabelWidthForMode:(id)a0;

@end
