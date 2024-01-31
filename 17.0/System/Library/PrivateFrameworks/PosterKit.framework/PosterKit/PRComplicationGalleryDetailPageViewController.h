@class UIStackView, UILayoutGuide, NSString, UIView, PRAddWidgetDetailSheetWidgetDescriptionView;
@protocol SBHAddWidgetSheetGalleryItem, PRComplicationGalleryDetailPageViewControllerDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBHWidgetDragHandling, PRComplicationGalleryWidgetHostProviding;

@interface PRComplicationGalleryDetailPageViewController : UIViewController <SBHWidgetWrapperViewControllerDelegate> {
    id<SBHWidgetDragHandling> _widgetDragHandler;
}

@property (weak, nonatomic) id<PRComplicationGalleryWidgetHostProviding> widgetHostProviding;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PRAddWidgetDetailSheetWidgetDescriptionView *descriptionView;
@property (retain, nonatomic) UIStackView *complicationsStackView;
@property (retain, nonatomic) UIView *referenceView;
@property (nonatomic) unsigned long long allowedFamilies;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (retain, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, nonatomic) id<SBHAddWidgetSheetGalleryItem> galleryItem;
@property (weak, nonatomic) id<PRComplicationGalleryDetailPageViewControllerDelegate> delegate;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconTapped:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_shouldDisplayFamily:(long long)a0;
- (id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)a0;
- (void)configureBackgroundView:(id)a0 matchingMaterialBeneathWrapperViewController:(id)a1;
- (id)initWithGalleryItem:(id)a0 listLayoutProvider:(id)a1 iconViewProvider:(id)a2 widgetDragHandler:(id)a3 allowedFamilies:(unsigned long long)a4;
- (void)updateParallaxEffectInReferenceView:(id)a0;

@end
