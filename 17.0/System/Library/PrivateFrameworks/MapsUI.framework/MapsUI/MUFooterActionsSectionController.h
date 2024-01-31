@class UIView, MUPlaceSectionFooterViewModel, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, NSString, UIViewController, MUPlaceSectionView, MUActionGroupSectionView;
@protocol MKPlaceActionItemFooterBuilder, MUInfoCardAnalyticsDelegate, MKPlaceActionManagerProtocol;

@interface MUFooterActionsSectionController : NSObject <MUPlaceSectionControlling> {
    MUPlaceSectionView *_sectionView;
    id<MKPlaceActionManagerProtocol, MKPlaceActionItemFooterBuilder> _actionManager;
    MUActionGroupSectionView *_footerView;
    NSArray *_footerActions;
}

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

- (void)reloadData;
- (void).cxx_destruct;
- (id)draggableContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)analyticsModule;
- (void)_setupFooterView;
- (int)analyticsModuleType;
- (id)initWithActionManager:(id)a0;
- (id)revealedAnalyticsModule;

@end
