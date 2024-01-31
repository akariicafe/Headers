@class HKElectrocardiogram, NSArray, UIColor, HKElectrocardiogramGridView, HKElectrocardiogramWaveformView, UIView;

@interface HKElectrocardiogramChartView : UIView

@property (class, readonly, nonatomic) NSArray *defaultGridOptions;
@property (class, readonly, nonatomic) NSArray *printedGridOptions;

@property (retain, nonatomic) HKElectrocardiogramGridView *gridView;
@property (retain, nonatomic) HKElectrocardiogramWaveformView *waveformView;
@property (retain, nonatomic) UIView *waveformContainerView;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (nonatomic) BOOL allowsScrolling;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } gridSize;
@property (readonly, copy, nonatomic) NSArray *gridOptions;
@property (readonly, nonatomic) double pointsPerSecond;
@property (readonly, nonatomic) double pointsPerMillivolt;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic, getter=isDisplayingControlSignal) BOOL displayControlSignal;
@property (readonly, nonatomic) double controlSignalDuration;
@property (nonatomic, getter=isEdgeMaskEnabled) BOOL edgeMaskEnabled;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setUpUI;
- (void)_updateChartForSizeChange;
- (void)displayElectrocardiogram:(id)a0 allowsScrolling:(BOOL)a1;
- (id)initWithGridSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithGridSize:(struct CGSize { double x0; double x1; })a0 gridOptions:(id)a1;
- (void)setWaveformPath:(id)a0;
- (void)setWaveformPaths:(id)a0;

@end
