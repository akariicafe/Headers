@class NSMutableArray, StockChartDisplayMode, UIView, SearchUIStockGraphSectionRowModel, NSString, NUIContainerBoxView, StockChartData, StockGraphView, NUIContainerStackView, TLKLabel, SearchUIDashedLineView, ChartUpdater;

@interface SearchUIStocksCardSectionView : SearchUICardSectionView <ChartUpdaterDelegate, NUIContainerViewDelegate>

@property (retain) ChartUpdater *chartUpdater;
@property (retain) StockGraphView *stockGraphView;
@property (retain) StockChartDisplayMode *displayMode;
@property (retain) TLKLabel *highLabel;
@property (retain) TLKLabel *lowLabel;
@property (retain) SearchUIDashedLineView *previousCloseLine;
@property (retain) StockChartData *chartData;
@property (retain) NUIContainerStackView *stackView;
@property (retain) NUIContainerBoxView *contentView;
@property (retain) NSMutableArray *axisViews;
@property (retain) UIView *xAxisKeyline;
@property (retain) NSMutableArray *xLabelViews;
@property (retain) SearchUIStockGraphSectionRowModel *rowModel;
@property (nonatomic) int graphColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)setupContentView;
- (void)chartUpdater:(id)a0 didFailWithError:(id)a1;
- (void)chartUpdater:(id)a0 didReceiveStockChartData:(id)a1;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)layoutAxesAndXLabels;
- (void)layoutPriceLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineGraphFrame;
- (void)setHourLabels;

@end
