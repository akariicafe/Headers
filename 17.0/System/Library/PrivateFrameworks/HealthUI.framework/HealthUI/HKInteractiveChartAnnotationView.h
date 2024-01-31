@class NSLayoutConstraint, _HKDateContentLayout, NSTimer, _HKAnnotationColumnLayout, _HKBodyMarginsLayout, UIButton;
@protocol HKInteractiveChartAnnotationViewDataSourceProtocol, HKInteractiveChartAnnotationViewDelegate;

@interface HKInteractiveChartAnnotationView : UIView

@property (retain, nonatomic) _HKAnnotationColumnLayout *columnLayout;
@property (retain, nonatomic) _HKDateContentLayout *dateContentLayout;
@property (retain, nonatomic) _HKBodyMarginsLayout *bodyMarginsLayout;
@property (retain, nonatomic) UIButton *infoButton;
@property (nonatomic) long long context;
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint;
@property (weak, nonatomic) NSTimer *deferredNoDataTimer;
@property (weak, nonatomic) id<HKInteractiveChartAnnotationViewDataSourceProtocol> dataSource;
@property (weak, nonatomic) id<HKInteractiveChartAnnotationViewDelegate> delegate;
@property (nonatomic) BOOL showsInfoButton;

- (void)reloadData;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithContext:(long long)a0;
- (void).cxx_destruct;
- (void)_invalidateLayout;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)setAccessibilityIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureLayout;
- (double)_leadingMargin;
- (void)infoButtonPressed:(id)a0;
- (void)_buildStandardAnnotationViews;
- (void)_cancelDeferredDataReload;
- (BOOL)_dataSourceHasNoData;
- (void)_removeViewsForRebuild;
- (void)_updateAutomationIdentifiers:(id)a0;
- (void)_updateRightMarginViewWithInfoButton;
- (void)handleCurrentTimeGesture:(id)a0;
- (void)scheduleDeferredDataReload;
- (void)showNoDataStatus;

@end
