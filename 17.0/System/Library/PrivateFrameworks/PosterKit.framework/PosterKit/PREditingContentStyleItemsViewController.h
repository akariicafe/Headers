@class UIStackView, NSArray, PREditingPosterContentStyleCoordinator, PREditingColorWell, PREditingContentStyleItemView, NSLayoutConstraint, PREditingColorWellView, PREditorContentStylePickerConfiguration;
@protocol PREditingContentStyleItemsDataSource, PREditingContentStyleItemsViewControllerDelegate;

@interface PREditingContentStyleItemsViewController : UIViewController

@property (retain, nonatomic) id<PREditingContentStyleItemsDataSource> dataSource;
@property (retain, nonatomic) PREditingContentStyleItemView *selectedContentStyleItemView;
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
@property (weak, nonatomic) id<PREditingContentStyleItemsViewControllerDelegate> delegate;
@property (retain, nonatomic) PREditingPosterContentStyleCoordinator *selectedContentStyleCoordinator;
@property (readonly, nonatomic) PREditorContentStylePickerConfiguration *configuration;
@property (nonatomic) double contentsLuminance;
@property (retain, nonatomic) PREditingPosterContentStyleCoordinator *uiKitColorPickerStyleCoordinator;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (void)colorWellDidUpdateColor:(id)a0;
- (void)deselectSelectedContentStyle;
- (void)didSelectContentStyleCoordinator:(id)a0;
- (void)didTapContentStyleItem:(id)a0;
- (id)initWithDataSource:(id)a0 configuration:(id)a1;
- (void)layoutWithItemViews:(id)a0;
- (void)setSelectedContentStyle:(id)a0 fromUIKitPicker:(BOOL)a1;
- (void)setupItemViews;
- (void)updateLayoutForCurrentSize;

@end
