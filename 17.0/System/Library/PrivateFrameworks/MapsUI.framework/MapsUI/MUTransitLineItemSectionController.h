@class MUPlaceSectionFooterViewModel, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, UIView, NSString, UIViewController;
@protocol GEOTransitLineItem, MUInfoCardAnalyticsDelegate;

@interface MUTransitLineItemSectionController : NSObject <MUPlaceSectionControlling>

@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)draggableContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)analyticsModule;
- (id)initWithTransitLineItem:(id)a0;
- (id)revealedAnalyticsModule;

@end
