@protocol PKPaletteErasingAttributesViewControllerDelegate;

@interface PKPaletteErasingAttributesViewController : PKPaletteAttributeViewController

@property (nonatomic) BOOL hideWeightPicker;
@property (nonatomic) long long eraserType;
@property (nonatomic) double weight;
@property (weak, nonatomic) id<PKPaletteErasingAttributesViewControllerDelegate> delegate;

+ (double)_preferredContentSizeWidth;

- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_attributesView;
- (void)_segmentedControlDidChangeValue:(id)a0;
- (void)_thicknessValueChanged:(id)a0;

@end
