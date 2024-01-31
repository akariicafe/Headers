@interface HKScalarGraphViewController : HKGraphViewController

@property (class, readonly, nonatomic) double hardLeftMarginWidth;

@property (readonly, nonatomic) double minimumHeight;

- (void)viewDidLoad;
- (void)loadView;
- (id)_buildGraphViewWithLabelDimension:(id)a0 labelEndings:(long long)a1 numericAxisConfigurationOverrides:(id)a2;
- (void)_pinView:(id)a0 toParentView:(id)a1;
- (void)_setupGraphViewSelectionStyle;
- (id)initWithMinimumHeight:(double)a0;
- (id)initWithMinimumHeight:(double)a0 labelDimension:(id)a1 labelEndings:(long long)a2 numericAxisConfigurationOverrides:(id)a3;

@end
