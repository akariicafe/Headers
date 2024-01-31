@class NSString, SKOverlay, AMSMutableBinaryPromise;

@interface AMSUIWebAppOverlayAction : AMSUIWebAction <SKOverlayDelegate>

@property (nonatomic) BOOL dismiss;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (retain, nonatomic) SKOverlay *presentationOverlay;
@property (retain, nonatomic) AMSMutableBinaryPromise *storeKitOverlayPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_dismissOverlay;
- (void)storeOverlay:(id)a0 didFailToLoadWithError:(id)a1;
- (void)storeOverlay:(id)a0 didFinishDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFinishPresentation:(id)a1;
- (id)_determineScene;
- (id)_dismissStoreKitOverlay;
- (id)_presentOverlayWithAppIdentifier:(id)a0;
- (id)_presentStoreKitOverlayWithAppIdentifier:(id)a0;
- (BOOL)_shouldUseStoreKit;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
