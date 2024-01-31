@class UIStackView, NSArray, PREditingColorVariationStore, PREditingColorWell, PREditingColorItem, PREditingColorItemView, NSLayoutConstraint, PREditingColorWellView, PREditorColorPickerConfiguration;
@protocol PREditingColorItemsDataSource, PREditingColorItemsViewControllerDelegate;

@interface PREditingColorItemsViewController : UIViewController

@property (retain, nonatomic) id<PREditingColorItemsDataSource> dataSource;
@property (retain, nonatomic) PREditingColorVariationStore *variationStore;
@property (retain, nonatomic) PREditingColorItemView *selectedColorItemView;
@property (retain, nonatomic) NSArray *allItemViews;
@property (retain, nonatomic) NSArray *allViews;
@property (nonatomic) double configuredViewWidth;
@property (nonatomic) double interitemSpacing;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (retain, nonatomic) NSArray *horizontalStackViews;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PREditingColorWell *colorWell;
@property (retain, nonatomic) PREditingColorWellView *colorWellView;
@property (weak, nonatomic) id<PREditingColorItemsViewControllerDelegate> delegate;
@property (retain, nonatomic) PREditingColorItem *selectedColorItem;
@property (readonly, nonatomic) PREditorColorPickerConfiguration *configuration;
@property (nonatomic) double contentsLuminance;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (void)colorWellDidUpdateColor:(id)a0;
- (void)deselectSelectedColor;
- (void)didSelectColorItem:(id)a0;
- (void)didTapColorItem:(id)a0;
- (void)didTapToResetColorItem:(id)a0;
- (id)initWithDataSource:(id)a0 configuration:(id)a1 variationStore:(id)a2;
- (void)layoutWithItemViews:(id)a0;
- (id)selectedColorItemForColor:(id)a0 fromDataSource:(id)a1 withVariationStore:(id)a2 contextIdentifier:(id)a3 isDataLayerPicker:(BOOL)a4;
- (id)selectedColorItemForColor:(id)a0 fromVariationStore:(id)a1 inDataSource:(id)a2 contextIdentifier:(id)a3 isDataLayerPicker:(BOOL)a4;
- (void)setupItemViews;
- (void)sliderDidChangeForColorItem:(id)a0;
- (void)updateLayoutForCurrentSize;
- (void)updateVibrantMaterialItemForLuminance;

@end
