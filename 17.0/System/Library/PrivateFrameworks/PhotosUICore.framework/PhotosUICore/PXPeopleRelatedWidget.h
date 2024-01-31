@class PXPhotosDetailsContext, NSString, PXWidgetSpec, PXTilingController, PXPeopleWidgetDataSource, PXSectionedSelectionManager, NSObject, PXPeopleStripCollectionViewController, PXAssetActionManager, PXUITapGestureRecognizer;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate, PXAnonymousView;

@interface PXPeopleRelatedWidget : NSObject <PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, UIGestureRecognizerDelegate, PXWidget> {
    PXUITapGestureRecognizer *_tapGestureRecognizer;
    PXUITapGestureRecognizer *_pressGestureRecognizer;
}

@property (retain, nonatomic) PXPeopleStripCollectionViewController *collectionViewController;
@property (nonatomic) BOOL isSummaryMode;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) double cellMinInteritemSpacing;
@property (nonatomic) double cellMinLineSpacing;
@property (nonatomic) BOOL showFooter;
@property (retain, nonatomic) PXPeopleWidgetDataSource *dataSource;
@property (nonatomic, getter=hasStartedLoadingDataSource) BOOL startedLoadingDataSource;
@property (nonatomic) unsigned long long viewType;
@property (nonatomic) double targetPrefetchWidth;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (readonly, nonatomic) BOOL wantsNoSpaceAfterContentBottom;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) struct CGSize { double x0; double x1; } maxVisibleSizeInEditMode;

+ (id)_deferredDataSourceLoadingQueue;

- (id)traitCollection;
- (void)_handleTap:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)contentSizeCategoryChanged:(id)a0;
- (void).cxx_destruct;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;
- (void)loadContentData;
- (void)peopleDataSourceMembersChanged:(id)a0;
- (double)preferredContentHeightForWidth:(double)a0;
- (BOOL)_calculateLayoutInfosForWidth:(double)a0 cellSize:(struct CGSize { double x0; double x1; } *)a1 interitemSpacing:(double *)a2;
- (void)_loadContainerView;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)a0;
- (void)_prepareDataSource;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_realContentInset;
- (void)_resetControllerLayoutInfosForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })_sizeForItemWithWidth:(double)a0 withInterItemSpacing:(double)a1;
- (id)initWithViewType:(unsigned long long)a0;
- (void)memberTappedAtIndexPath:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 forPeopleStripController:(id)a2;
- (void)peopleDataSource:(id)a0 didAddMembersAtIndexPaths:(id)a1;
- (void)peopleDataSource:(id)a0 didApplyIncrementalChanges:(id)a1;
- (void)peopleDataSource:(id)a0 didRemoveMembersAtIndexPaths:(id)a1;
- (void)peopleDataSource:(id)a0 didUpdateMembersAtIndexPaths:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItem;
- (void)unloadContentData;

@end
