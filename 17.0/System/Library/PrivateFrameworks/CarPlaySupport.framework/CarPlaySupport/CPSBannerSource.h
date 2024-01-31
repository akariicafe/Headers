@class NSString, NSTimer, BNBannerSource, CPSApplicationStateMonitor, CPSBannerViewController, NSUUID;
@protocol CPBannerDelegate;

@interface CPSBannerSource : NSObject <CPSBannerViewControllerDelegate, BSInvalidatable, CPBannerProviding, CPSApplicationStateObserving>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id<CPBannerDelegate> delegate;
@property (retain, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor;
@property (retain, nonatomic) BNBannerSource *bannerKitSource;
@property (retain, nonatomic) CPSBannerViewController *presentedBannerViewController;
@property (retain, nonatomic) NSTimer *dimissTimer;
@property (nonatomic, getter=isRateLimited) BOOL rateLimited;
@property (retain, nonatomic) NSUUID *lastUserDismissedIdentifier;
@property (retain, nonatomic) NSTimer *lastUserDismissedIdentifierResetTimer;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_flushQueue;
- (void)postBannerForManeuver:(id)a0 travelEstimates:(id)a1;
- (void)postBannerForNavigationAlert:(id)a0;
- (void)_dismissTimerFired:(id)a0;
- (void)_enqueueBannerItem:(id)a0;
- (void)_postBannerRequestForBannerItem:(id)a0;
- (void)_resetDismissTimer;
- (void)_resetLastUserDismissedIdentifierTimer;
- (void)_resetLastUserDismissedIdentifierTimerFired:(id)a0;
- (void)_revokePresentedBannerWithReason:(id)a0;
- (void)_setBannerRateLimitEnabled:(BOOL)a0 bundleIdentifier:(id)a1;
- (void)applicationStateMonitor:(id)a0 didBecomeActive:(BOOL)a1;
- (void)bannerViewController:(id)a0 requestsDismissalWithReason:(id)a1;
- (void)bannerViewControllerDidAppearWithIdentifier:(id)a0;
- (void)bannerViewControllerDidDisappearWithIdentifier:(id)a0;
- (void)bannerViewControllerTappedWithIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 delegate:(id)a1 applicationStateMonitor:(id)a2;

@end
