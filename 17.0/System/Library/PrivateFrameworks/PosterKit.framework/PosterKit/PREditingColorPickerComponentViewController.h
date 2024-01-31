@class UIColor, UIStackView, PREditingColorItemsViewController, PREditingColorSlider, PREditorColorPickerConfiguration, PREditingColorVariationStore;
@protocol PREditingColorPickerComponentViewControllerDelegate;

@interface PREditingColorPickerComponentViewController : UIViewController <PREditingColorItemsViewControllerDelegate>

@property (retain, nonatomic) PREditorColorPickerConfiguration *configuration;
@property (retain, nonatomic) PREditingColorVariationStore *variationStore;
@property (nonatomic) BOOL forFontPicker;
@property (nonatomic) BOOL showsHeader;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIStackView *verticalStack;
@property (retain, nonatomic) PREditingColorItemsViewController *itemsViewController;
@property (retain, nonatomic) PREditingColorSlider *sliderView;
@property (weak, nonatomic) id<PREditingColorPickerComponentViewControllerDelegate> delegate;
@property (nonatomic) double contentsLuminance;

- (id)init;
- (void)loadView;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (void)loadItemsViewControllerIfNeeded;
- (void)updateForColorWellSelectedItem:(id)a0;
- (void)colorItemsViewController:(id)a0 didSelectColorItem:(id)a1;
- (void)colorItemsViewController:(id)a0 didTapToResetColorItem:(id)a1;
- (void)colorItemsViewControllerDidUpdateEstimatedSize:(id)a0;
- (void)colorSliderDidUpdateColor:(id)a0;
- (void)didSelectColorItem:(id)a0;
- (id)initWithConfiguration:(id)a0 variationStore:(id)a1;
- (void)updateSliderVisibility:(BOOL)a0;

@end
