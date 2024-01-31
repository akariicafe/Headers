@class NSDate, NSString, PUAirPlayRouteObserverRegistry, PUAirPlayScreenDetector, AVOutputContext, PUAirPlayScreen, UIViewController, PUAirPlayContentRegistry, PUAirPlayRootViewController;

@interface PHAirPlayScreenController : NSObject <PUAirPlayScreenReceiver, PUAirPlayRouteObserverRegistryDelegate>

@property (retain, nonatomic, setter=_setCurrentScreen:) PUAirPlayScreen *_currentScreen;
@property (retain, nonatomic, setter=_setScreenDetector:) PUAirPlayScreenDetector *_screenDetector;
@property (retain, nonatomic, setter=_setRootViewController:) PUAirPlayRootViewController *_rootViewController;
@property (retain, nonatomic, setter=_setContentRegistry:) PUAirPlayContentRegistry *_contentRegistry;
@property (retain, nonatomic, setter=_setRouteObserverRegistry:) PUAirPlayRouteObserverRegistry *_routeObserverRegistry;
@property (retain, nonatomic, setter=_setLastDisplayedContent:) UIViewController *_lastDisplayedContent;
@property (retain, nonatomic, setter=_setLastScreenConnectDate:) NSDate *_lastScreenConnectDate;
@property (retain, nonatomic, setter=_setLastScreenRequestDate:) NSDate *_lastScreenRequestDate;
@property (nonatomic, setter=_setLastScreenRequestOrigin:) long long _lastScreenRequestOrigin;
@property (nonatomic) long long airPlaySessionSignpost;
@property (retain, nonatomic) id secondDisplayModeToken;
@property (retain, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic, getter=isDisplayingContent) BOOL displayingContent;
@property (readonly, nonatomic) unsigned long long screenAvailability;
@property (readonly, nonatomic) unsigned long long routeAvailability;
@property (readonly, nonatomic) long long routeUnavailableReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct __CFString { } *)_keyForScreenRequestOrigin:(long long)a0;

- (id)init;
- (void)_handleSettingHighResolutionContent:(BOOL)a0 forRootController:(id)a1 content:(id)a2;
- (void)notifyDidPresentAirPlayRoutesFromShareSheet;
- (id)_currentContent;
- (void)registerContentProvider:(id)a0;
- (void)notifyDidPresentAirPlayRoutesFromSlideshow;
- (void)_recordSessionBeganWithScreen:(id)a0;
- (BOOL)_shouldHideRoutesForExternalDisplay;
- (id)_findAvailableScreen;
- (void)_notifyWillRequestAirPlayScreenFromSource:(long long)a0;
- (void)_sceneDidActivate:(id)a0;
- (void)_recordSessionEnded;
- (void)screenDetector:(id)a0 didDetectScreen:(id)a1;
- (id)_screenAvailabilityName;
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)a0 forRouteObserver:(id)a1;
- (void)screenDetector:(id)a0 didLoseScreen:(id)a1;
- (BOOL)pu_hasAvailableRoute;
- (void)_updateScreenContentWithShouldTryToFindAvailableScreen:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_shouldUpdateSecondDisplayModeWithCurrentContent;
- (void)unregisterRouteObserver:(id)a0;
- (void)_outputDeviceDidChange:(id)a0;
- (void)unregisterContentProvider:(id)a0;
- (void)_sceneWillDeactivate:(id)a0;
- (void)registerRouteObserver:(id)a0;
- (void)_updateSecondDisplayModeWithCurrentContent;
- (BOOL)_shouldIgnoreScreen:(id)a0;
- (void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)a0;
- (void)_switchModeForHighResolutionContent:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
