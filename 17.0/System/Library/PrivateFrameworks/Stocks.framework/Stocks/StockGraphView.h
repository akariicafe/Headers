@class UIView, StockChartDisplayMode, NSArray, LineGraphView, VolumeGraphView, NSMutableArray, StockChartData, GraphRenderOperation;
@protocol StockGraphViewContainer;

@interface StockGraphView : UIView <GraphRenderOperationDelegate> {
    LineGraphView *_lineView;
    VolumeGraphView *_volumeView;
    StockChartData *_chartData;
    int _valueIndex;
    int _valueCount;
    struct CGPoint { double x0; double x1; } *_points;
    struct CGPoint { double x0; double x1; } *_values;
    NSMutableArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    unsigned int _dataSize;
    unsigned int _dataCount;
    struct { double x0; unsigned long long x1; } *_volumeBars;
    unsigned int _volumeSize;
    unsigned int _volumeCount;
    double _volumeBarWidth;
    unsigned long long _maxVolume;
    GraphRenderOperation *_renderOperation;
}

@property (weak, nonatomic) UIView<StockGraphViewContainer> *chartViewDelegate;
@property (readonly, nonatomic) BOOL isRendered;
@property (readonly, nonatomic) BOOL isRendering;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } graphInsets;
@property (retain, nonatomic) StockChartDisplayMode *displayMode;

- (void)_layoutSubviews;
- (void)dealloc;
- (void)clearData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)clearPaths;
- (void)loadStockChartData:(id)a0;
- (void)recomputePathsAndRenderIfNeededForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setShowingSelectedVolumeRegion:(BOOL)a0;
- (void)_finishCurrentLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_lineViewFrameForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_normalizedAccumulatedVolumeInDataRange:(struct CGPoint { double x0; double x1; })a0;
- (float)_priceAtTime:(double)a0 dataPosition:(double *)a1;
- (void)_processGraphDataForWidth:(double)a0;
- (double)_timeAtPosition:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trueGraphPointsRegion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_volumeViewFrameForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)cancelRenderOperation;
- (void)graphRenderOperationDidFinish:(id)a0;
- (struct { double x0; double x1; unsigned long long x2; })plottedPointNearestToPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (void)readyForDisplayFromChartData;
- (void)resizeSelectedLineClipViewWithLeftX:(double)a0 rightX:(double)a1;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)a0 rightX:(double)a1;
- (struct CGPoint { double x0; double x1; })rightmostPlottedPoint;
- (void)setDottedLinePositionsWithLabelInfo:(id)a0;
- (void)setEvenlySpacedDottedLinePositionsWithCount:(unsigned long long)a0;
- (void)setShowingSelectedLine:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })volumeBarRectNearestToPoint:(struct CGPoint { double x0; double x1; })a0;

@end
