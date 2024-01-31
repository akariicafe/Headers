@class UIView, MUPlaceSectionFooterViewModel, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, NSString, MUContactsViewModelGenerator, MUPlaceDataAvailability, UIViewController, NSMutableArray;
@protocol MUContactSharedLocationSectionControllerDelegate, MUInfoCardAnalyticsDelegate, _MKPlaceItem;

@interface MUContactSharedLocationSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    id<_MKPlaceItem> _placeItem;
    MUPlaceDataAvailability *_availability;
    NSMutableArray *_sectionStackViews;
    NSArray *_sectionViews;
    MUContactsViewModelGenerator *_contactViewModelGenerator;
}

@property (weak, nonatomic) id<MUContactSharedLocationSectionControllerDelegate> contactSharedLocationSectionDelegate;
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
- (id)initWithPlaceItem:(id)a0 availability:(id)a1;
- (void)_buildSections;
- (id)_loadPlaceInfoAddress:(id)a0 contact:(id)a1;
- (int)analyticsModuleType;
- (BOOL)isImpressionable;
- (id)mapItemCoordinateViewModel;

@end
