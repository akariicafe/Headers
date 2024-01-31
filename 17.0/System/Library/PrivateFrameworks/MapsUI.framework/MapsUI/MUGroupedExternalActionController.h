@class GEOPlaceExternalAction, NSArray, MUVendorLinkSorter, MUPlaceExtensionDiscoveryManager, MUAMSResultProvider;
@protocol MUExternalActionHandling, MUExternalActionAnalyticsHandling;

@interface MUGroupedExternalActionController : NSObject {
    id<MUExternalActionHandling> _actionHandler;
    id<MUExternalActionAnalyticsHandling> _analyticsHandler;
    NSArray *_viewModels;
    MUVendorLinkSorter *_vendorLinkSorter;
    MUPlaceExtensionDiscoveryManager *_extensionDiscoveryManager;
    MUAMSResultProvider *_amsResultProvider;
}

@property (readonly, nonatomic) int resolvedAnalyticsTarget;
@property (readonly, nonatomic) BOOL hasMultipleVendorsForAnalytics;
@property (readonly, nonatomic) GEOPlaceExternalAction *externalAction;
@property (nonatomic) int singleVendorAnalyticsTarget;
@property (nonatomic) int multipleVendorAnalyticsTarget;
@property (nonatomic) long long analyticsModuleType;
@property (nonatomic) long long source;
@property (readonly, nonatomic) BOOL supportsMultipleVendorSelection;

- (void).cxx_destruct;
- (void)_executeBestIntegrationForProvider:(id)a0 index:(unsigned long long)a1;
- (void)_openMapsExtensionUsingExtensionParams:(id)a0 handlingOptions:(id)a1;
- (id)_viewModelsWithSortApplied;
- (void)captureGroupedMenuRevealAnalyticsIfNeededWithIsQuickAction:(BOOL)a0;
- (void)fetchProviderLockupsWithCompletion:(id /* block */)a0;
- (id)initWithGroupedExternalAction:(id)a0 amsResultProvider:(id)a1 supportsMultipleVendorSelection:(BOOL)a2 actionHandler:(id)a3 analyticsHandler:(id)a4;
- (void)openFirstPartnerAction;
- (void)openPartnerActionUsingViewModel:(id)a0;

@end
