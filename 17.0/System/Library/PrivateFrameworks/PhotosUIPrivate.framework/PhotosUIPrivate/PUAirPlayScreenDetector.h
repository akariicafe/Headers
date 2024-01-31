@class NSArray, NSMutableDictionary, SBSExternalDisplayService, NSString;
@protocol PUAirPlayScreenReceiver;

@interface PUAirPlayScreenDetector : NSObject <SBSExternalDisplayServiceObserver>

@property (readonly, nonatomic) SBSExternalDisplayService *externalDisplayService;
@property (readonly, nonatomic) NSMutableDictionary *detectedScreensMap;
@property (weak, nonatomic) id<PUAirPlayScreenReceiver> receiver;
@property (readonly, nonatomic) NSArray *availableScreens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_sceneDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)_sceneWillConnect:(id)a0;
- (void)externalDisplayDidUpdateProperties:(id)a0;
- (BOOL)shouldIgnoreScreen:(id)a0 displayInfo:(id)a1;
- (void)_createAirPlayScreenAndNotifyDelegate:(id)a0;
- (void)_enumerateAllScreensAndDisplayInfos:(id /* block */)a0;
- (void)_handleUpdatedDisplayInfo:(id)a0;
- (void)_performBlockWithDisplayInfoForScreen:(id)a0 handler:(id /* block */)a1;
- (void)_performBlockWithScreenForDisplayInfo:(id)a0 handler:(id /* block */)a1;
- (void)_removeAirPlayScreenAndNotifyDelegate:(id)a0;
- (void)_scanForAvailableScreens;
- (void)_setUpSceneNotifications;

@end
