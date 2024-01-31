@class MUPlaceUnifiedActionRowSectionControllerConfiguration, NSString, MUPlaceholderGridCache, NSArray, MUFeatureDiscoveryAnnotationView, MUTimeExpirableLRUCache, MUDownloadOfflineActionRowItemViewModel, MUGroupedActionsRowView, MUPlaceSectionView, _MKPlaceActionButtonController;
@protocol MUOfflineMapProvider, MUPlaceUnifiedActionRowSectionControllerDelegate;

@interface MUPlaceUnifiedActionRowSectionController : MUPlaceSectionController <MUPlaceCardActionsRowViewMenuProvider, MUPlaceCardActionsRowViewDelegate, MUActionRowItemViewModelObserver, MUExternalActionAnalyticsHandling> {
    MUPlaceUnifiedActionRowSectionControllerConfiguration *_configuration;
    MUGroupedActionsRowView *_actionsRowView;
    MUPlaceSectionView *_sectionView;
    MUPlaceholderGridCache *_placeholderGridCache;
    NSArray *_actionItemViewModels;
    MUTimeExpirableLRUCache *_partnerIconsByURLs;
    MUDownloadOfflineActionRowItemViewModel *_offlineViewModel;
    BOOL _hasContent;
}

@property (weak, nonatomic) id<MUPlaceUnifiedActionRowSectionControllerDelegate> actionDelegate;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryActionButtonController;
@property (weak, nonatomic) id<MUOfflineMapProvider> offlineMapProvider;
@property (retain, nonatomic) MUFeatureDiscoveryAnnotationView *offlineFeatureDiscoveryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasContent;
- (void).cxx_destruct;
- (id)sectionView;
- (id)_buildSARLayout;
- (void)_updateActions:(id)a0;
- (id)analyticsModule;
- (id)_actionItemViewModelWithPlaceActionItem:(id)a0;
- (void)_buildButtonLayout;
- (id)_buildServerControlledLayoutWithConfiguration:(id)a0;
- (id)_buildStaticLayout;
- (id)_contactActionRowViewModel;
- (void)_createSectionView;
- (id)_directionsViewModel;
- (id)_downloadOfflineViewModel;
- (id)_moreActionsViewModelWithGroupedButton:(id)a0 excludedSystemActionsTypes:(id)a1;
- (id)_moreActionsViewModelWithPartnerActions:(id)a0 promotedSystemActionTypes:(id)a1 excludedSystemActionTypes:(id)a2;
- (id)_partnerActionViewModelWithPartnerActionIndex:(unsigned long long)a0;
- (void)_populateRevealedAnalyticsModule:(id)a0;
- (void)_updateHasContent;
- (void)actionRowItemViewModelDidUpdate:(id)a0;
- (void)actionsRowView:(id)a0 didPresentMenuForViewModel:(id)a1;
- (void)actionsRowView:(id)a0 didSelectViewModel:(id)a1 presentationOptions:(id)a2;
- (int)analyticsModuleType;
- (void)didUpdateFeatureDiscoveryStatus:(id)a0;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (void)instrumentExternalActionUsingAnalyticsAction:(int)a0 target:(int)a1 eventValue:(id)a2 sharedStateButtonList:(id)a3;
- (BOOL)isImpressionable;
- (id)menuElementForActionItem:(id)a0;
- (id)menuForActionItem:(id)a0;

@end
