@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, MUTransitDeparturesDataSource, UIViewController, MUTransitDeparturesSectionViewProvider;
@protocol MUTransitDeparturesSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUTransitDeparturesSectionController : MUPlaceSectionController <_MKInfoCardAnalyticsDelegate, MUTransitDeparturesDataSourceDelegate, MUTransitDeparturesSectionViewProviderUserInteractionDelegate, MUPlaceSectionControlling> {
    MUTransitDeparturesSectionViewProvider *_viewProvider;
    MUTransitDeparturesDataSource *_dataSource;
}

@property (weak, nonatomic) id<MUTransitDeparturesSectionControllerDelegate> departuresDelegate;
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
- (id)draggableContent;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2 actionRichProviderId:(id)a3;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 moduleMetadata:(id)a5 feedbackDelegateSelector:(int)a6 actionRichProviderId:(id)a7;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 feedbackDelegateSelector:(int)a3 actionRichProviderId:(id)a4;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 moduleMetadata:(id)a3 feedbackDelegateSelector:(int)a4 actionRichProviderId:(id)a5;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)a0 resultIndex:(long long)a1 targetID:(unsigned long long)a2 transitSystem:(id)a3 transitDepartureSequence:(id)a4 transitCardCategory:(int)a5 transitIncident:(id)a6 feedbackDelegateSelector:(int)a7;
- (void)_setupSections;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 allowTransitLineSelection:(BOOL)a1 departuresDelegate:(id)a2;
- (BOOL)isImpressionable;
- (BOOL)sectionViewProvider:(id)a0 canSelect:(id)a1 using:(id)a2;
- (void)sectionViewProvider:(id)a0 didSelect:(id)a1 using:(id)a2;
- (void)sectionViewProvider:(id)a0 didSelectAttribution:(id)a1;
- (void)sectionViewProvider:(id)a0 didSelectConnectionInfo:(id)a1;
- (void)sectionViewProvider:(id)a0 didSelectDepartureSequence:(id)a1 using:(id)a2;
- (void)sectionViewProvider:(id)a0 didSelectIncidents:(id)a1;
- (id)traitsForDeparturesDataSource:(id)a0;
- (void)transitDeparturesDataSourceWantsReload:(id)a0;

@end
