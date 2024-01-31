@class GEOTransitOptions, MUPlaceHeaderView, MULoadingOverlayController, MUHeaderButtonsSectionController, MUNearestStationSectionController, UIView, UIScrollView, NSString, GEOAutomobileOptions, GEOWalkingOptions, MUScrollableStackView, MKETAProvider, MUNearestStationProvider, NSArray, MUTransitLineItemActionManager, GEOCyclingOptions;
@protocol MUTransitLineItemViewControllerDelegate, GEOTransitLineItem, UIScrollViewDelegate;

@interface MUTransitLineItemViewController : UIViewController <MKETAProviderDelegate, MUNearestStationSectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MUHeaderButtonsSectionControllerDelegate, MUTransitLineIncidentsSectionControllerDelegate, UIScrollViewDelegate, MUInfoCardAnalyticsDelegate, MUTransitLineItemActionManagerDelegate, MUInfoCardContentProtocol> {
    NSArray *_sectionControllers;
    MUScrollableStackView *_contentStackView;
    MUTransitLineItemActionManager *_actionManager;
    MKETAProvider *_etaProvider;
    MUNearestStationProvider *_nearbyStationProvider;
    MUNearestStationSectionController *_nearestStationSectionController;
    NSString *_lastNearestRequestErrorMessage;
    MUPlaceHeaderView *_headerView;
    MULoadingOverlayController *_loadingOverlayController;
}

@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) MUHeaderButtonsSectionController *headerButtonsSectionController;
@property (readonly, nonatomic) id<GEOTransitLineItem> transitLineItem;
@property (weak, nonatomic) id<MUTransitLineItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *draggableHeaderView;
@property (readonly, nonatomic) UIView *viewForHeaderContainmentString;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) double heightForContentAboveTitle;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double contentAlpha;
@property (readonly, nonatomic) UIScrollView *scrollView;

+ (double)headerHeightInMinimalMode;

- (void)scrollToTopAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (double)currentHeight;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_setupContentView;
- (id)createMenuActions;
- (id)draggableContent;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2 actionRichProviderId:(id)a3;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 feedbackDelegateSelector:(int)a5 actionRichProviderId:(id)a6;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 moduleMetadata:(id)a5 feedbackDelegateSelector:(int)a6 actionRichProviderId:(id)a7;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 feedbackDelegateSelector:(int)a3 actionRichProviderId:(id)a4;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 moduleMetadata:(id)a3 feedbackDelegateSelector:(int)a4 actionRichProviderId:(id)a5;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)a0 resultIndex:(long long)a1 targetID:(unsigned long long)a2 transitSystem:(id)a3 transitDepartureSequence:(id)a4 transitCardCategory:(int)a5 transitIncident:(id)a6 feedbackDelegateSelector:(int)a7;
- (int)mapTypeForETAProvider:(id)a0;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)nearestStationSectionController:(id)a0 didSelectStationAttributionURL:(id)a1;
- (void)_attachLoadingOverlayIfNeeded;
- (void)_fetchNearestStation;
- (id)_footerSectionController;
- (void)_openAttributionURLStrings:(id)a0 usingAttribution:(id)a1;
- (void)_removeLoadingOverlayIfNeeded;
- (void)_updateSectionControllers;
- (void)contentAboveTitleScrollPositionChanged:(double)a0;
- (void)headerButtonsSectionController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withPresentationOptions:(id)a2;
- (void)headerButtonsSectionControllerDidUpdateContent:(id)a0;
- (void)hideTitle:(BOOL)a0;
- (void)incidentsSectionController:(id)a0 didSelectDetailsForIncidents:(id)a1;
- (id)initWithTransitLineItem:(id)a0;
- (void)lineItemManager:(id)a0 didSelectReportAProblemWithEnvironment:(id)a1;
- (void)nearestStationSectionController:(id)a0 didTapStationItem:(id)a1;
- (void)placeDescriptionSectionControllerDidTapAttribution:(id)a0;
- (void)resetNearestStation;
- (void)setTransitLineItem:(id)a0;
- (void)setTransitLineItem:(id)a0 loading:(BOOL)a1;
- (void)updateHeaderTrailingConstant;

@end
