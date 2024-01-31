@class PRWidgetIconViewProvider, NSArray, NSString, UICollectionViewDiffableDataSource, UIView, PRComplicationGalleryView, NSMutableDictionary;
@protocol PRComplicationGalleryViewControllerDelegate, SBHWidgetDragHandling;

@interface PRComplicationGalleryViewController : UIViewController <PRComplicationGalleryViewDelegate, PRComplicationGalleryItemViewDelegate, UICollectionViewDelegate, PRComplicationGalleryWidgetHostProviding, UISheetPresentationControllerDelegate, SBHAddWidgetSheetViewControllerDelegate, SBHWidgetDragHandling, SBRecycledViewsContainerProviding> {
    PRComplicationGalleryView *_complicationGalleryView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_suggestionSets;
    NSMutableDictionary *_widgetHostViewControllersPerReason;
    PRWidgetIconViewProvider *_iconViewProvider;
}

@property (retain, nonatomic) UIView *recycledViewsContainerView;
@property (weak, nonatomic) id<PRComplicationGalleryViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *applicationWidgetCollections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;
@property (readonly, nonatomic) UIView *recycledViewsContainer;

- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)loadView;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)_buildSnapshot;
- (void)_closeButtonTapped:(id)a0;
- (void)_configureWidgetCell:(id)a0 forItem:(id)a1 atIndexPath:(id)a2;
- (void)_configureWidgetHostViewController:(id)a0 forWidgetDescriptor:(id)a1;
- (id)_galleryItemForComplicationDescriptor:(id)a0 iconImageHidden:(BOOL)a1;
- (id)_galleryItemForWidgetDescriptor:(id)a0 family:(long long)a1 iconImageHidden:(BOOL)a2;
- (id)_galleryItemsForWidgetDescriptors:(id)a0 iconImageHidden:(BOOL)a1;
- (id)_widgetHostViewControllerForDescriptor:(id)a0;
- (id)_widgetHostViewControllerForDescriptor:(id)a0 forReason:(id)a1;
- (void)addWidgetSheetViewController:(id)a0 didSelectWidgetIconView:(id)a1;
- (void)addWidgetSheetViewControllerDidAppear:(id)a0;
- (void)addWidgetSheetViewControllerDidCancel:(id)a0;
- (void)addWidgetSheetViewControllerDidDisappear:(id)a0;
- (void)addWidgetSheetViewControllerWillAppear:(id)a0;
- (void)addWidgetSheetViewControllerWillDisappear:(id)a0;
- (void)complicationGalleryItemView:(id)a0 didBeginDragInteraction:(id)a1;
- (void)complicationGalleryItemView:(id)a0 didEndDragInteraction:(id)a1 withOperation:(unsigned long long)a2;
- (void)didBeginDraggingWidgetIcon:(id)a0;
- (void)didEndDraggingWidgetIcon:(id)a0;
- (id)initWithSuggestionSets:(id)a0 applicationWidgetCollections:(id)a1;
- (void)invalidateWidgetHostViewControllersForReason:(id)a0;
- (long long)layoutStyleForSectionIndex:(long long)a0;
- (id)widgetHostViewControllerForDescriptor:(id)a0 forReason:(id)a1;
- (id)widgetHostViewControllersForReason:(id)a0;
- (id)widgetIconForDescriptor:(id)a0 sizeClass:(long long)a1;
- (id)widgetIconForDescriptors:(id)a0 sizeClass:(long long)a1;
- (id)widgetIconForGalleryItem:(id)a0 sizeClass:(long long)a1;

@end
