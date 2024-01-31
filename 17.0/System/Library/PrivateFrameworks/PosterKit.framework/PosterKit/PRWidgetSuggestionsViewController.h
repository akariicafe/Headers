@class PRWidgetSuggestionsView, NSArray, UICollectionViewDiffableDataSource, NSString;
@protocol PRWidgetSuggestionsViewControllerDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBHWidgetDragHandling;

@interface PRWidgetSuggestionsViewController : UIViewController <PRSidebarWidgetSuggestionsCollectionViewLayoutDelegate, SBHWidgetWrapperViewControllerDelegate, UICollectionViewDelegate> {
    id<SBHWidgetDragHandling> _widgetDragHandler;
}

@property (retain, nonatomic) PRWidgetSuggestionsView *widgetSuggestionsView;
@property (retain, nonatomic) NSArray *suggestionSets;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (retain, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (nonatomic) BOOL usingSidebarLayout;
@property (weak, nonatomic) id<PRWidgetSuggestionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;

- (void)iconTapped:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)_configureWidgetCell:(id)a0 forItem:(id)a1 atIndexPath:(id)a2;
- (id)_galleryItemForComplicationDescriptor:(id)a0 iconImageHidden:(BOOL)a1;
- (id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)a0;
- (id)complicationDescriptorForItemAtIndexPath:(id)a0;
- (void)configureBackgroundView:(id)a0 matchingMaterialBeneathWrapperViewController:(id)a1;
- (id)initWithSuggestionSets:(id)a0 listLayoutProvider:(id)a1 iconViewProvider:(id)a2 widgetDragHandler:(id)a3 usingSidebarLayout:(BOOL)a4;

@end
