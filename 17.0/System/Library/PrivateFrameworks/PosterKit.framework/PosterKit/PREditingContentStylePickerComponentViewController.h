@class PREditingContentStyleItemsDataSource, UIStackView, PREditingContentStyleItemsViewController, PREditingVariationSlider, PREditingPosterContentStyleCoordinator, NSString, PREditingColorWell, PREditingColorWellView, PREditorContentStylePickerConfiguration, UIColor;
@protocol PREditingContentStylePickerComponentViewControllerDelegate;

@interface PREditingContentStylePickerComponentViewController : UIViewController <PREditingContentStyleItemsViewControllerDelegate, PREditingContentStyleItemsDataSourceDelegate>

@property (retain, nonatomic) PREditorContentStylePickerConfiguration *configuration;
@property (retain, nonatomic) PREditingContentStyleItemsDataSource *dataSource;
@property (nonatomic) BOOL showsHeader;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIStackView *verticalStack;
@property (retain, nonatomic) PREditingContentStyleItemsViewController *itemsViewController;
@property (retain, nonatomic) PREditingVariationSlider *sliderView;
@property (weak, nonatomic) id<PREditingContentStylePickerComponentViewControllerDelegate> delegate;
@property (retain, nonatomic) PREditingPosterContentStyleCoordinator *uiKitColorPickerContentStyleCoordinator;
@property (nonatomic) double contentsLuminance;
@property (retain, nonatomic) PREditingColorWellView *colorWellView;
@property (retain, nonatomic) PREditingColorWell *colorWell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (void)loadItemsViewControllerIfNeeded;
- (void)colorSliderDidUpdateVariation:(id)a0;
- (void)colorWellDidUpdateColor:(id)a0;
- (void)contentStyleItemsViewController:(id)a0 didSelectContentStyleCoordinator:(id)a1;
- (void)contentStyleItemsViewControllerDidUpdateEstimatedSize:(id)a0;
- (id)coordinatorForStyle:(id)a0 isSuggestedStyle:(BOOL)a1 fromDataSource:(id)a2;
- (void)didSelectContentStyle:(id)a0;
- (void)updateSliderVisibility:(BOOL)a0;

@end
