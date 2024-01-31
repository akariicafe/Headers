@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, MUFixedHeightAwareViewController, UIViewController, MUPlaceSectionView;
@protocol MUTransitLineIncidentsSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUTransitLineIncidentsSectionController : MUTransitLineItemSectionController <MUTransitLineIncidentsViewControllerDelegate, MUPlaceSectionControlling> {
    MUFixedHeightAwareViewController *_fixedHeightAwareVC;
    MUPlaceSectionView *_sectionView;
}

@property (weak, nonatomic) id<MUTransitLineIncidentsSectionControllerDelegate> incidentsDelegate;
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

- (void).cxx_destruct;
- (void)_setupSection;
- (id)initWithTransitLineItem:(id)a0;
- (void)transitLineIncidentsViewController:(id)a0 didSelectDetailsForIncidents:(id)a1;

@end
