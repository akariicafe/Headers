@class UIView, MUPlaceSectionFooterViewModel, NSArray, NSString, MUPlaceSectionHeaderViewModel, MUCuratedGuidesSectionView, MUCuratedCollectionsPlacecardAnalyticsManager, MUPlaceCallToActionAppearance, UIViewController, MUPlaceSectionView;
@protocol MKPlaceCollectionsDelegate, MUInfoCardAnalyticsDelegate;

@interface MUCuratedGuidesSectionController : MUPlaceSectionController <UIScrollViewDelegate, MKCollectionCarouselAnalyticsDelegate, MUPlaceSectionControlling> {
    MUPlaceSectionView *_sectionView;
}

@property (retain, nonatomic) MUCuratedGuidesSectionView *carouselView;
@property (retain, nonatomic) MUCuratedCollectionsPlacecardAnalyticsManager *analyticsManager;
@property (weak, nonatomic) id<MKPlaceCollectionsDelegate> collectionsDelegate;
@property (retain, nonatomic) NSArray *collectionIds;
@property (retain, nonatomic) NSArray *placeCollections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void)_setupViews;
- (void).cxx_destruct;
- (void)_setupCollectionView;
- (void)collectionsCarouselDidRouteToCollectionId:(id)a0 atIndex:(long long)a1 isSaved:(BOOL)a2;
- (void)collectionsCarouselDidScrollBackward;
- (void)collectionsCarouselDidScrollForward;
- (id)draggableContent;
- (void)exploreGuidesButtonTapped;
- (void)refreshCollections;
- (id)_sectionHeaderTitle;
- (void)_seeAllTapped;
- (int)analyticsModuleType;
- (id)initWithDelegate:(id)a0 withPlaceCollections:(id)a1 usingSyncCoordinator:(id)a2 usingMapItem:(id)a3 usingCollectionIds:(id)a4 exploreGuides:(id)a5;
- (BOOL)isImpressionable;
- (BOOL)shouldShowMoreButton;

@end
