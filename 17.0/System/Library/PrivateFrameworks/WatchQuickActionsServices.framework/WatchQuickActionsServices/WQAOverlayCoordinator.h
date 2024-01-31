@class NSArray, NSMutableArray, NSString;
@protocol WQAOverlayDataSource;

@interface WQAOverlayCoordinator : NSObject <BLSBacklightStateObserving>

@property (weak, nonatomic) id<WQAOverlayDataSource> dataSource;
@property (retain, nonatomic) NSMutableArray *quickActionShapeLayers;
@property (retain, nonatomic) NSArray *currentShapeLayersForHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (id)_localizedBannerInstructionText;
- (BOOL)_astFocusRingIsVisible;
- (id)_createNonAnimatingShapeLayerFromPath:(id)a0;
- (void)_mainQueue_addAnimatedShapeLayerForQuickAction:(id)a0;
- (void)_mainQueue_backlightDidTurnOff;
- (void)_mainQueue_backlightDidTurnOn;
- (void)_mainQueue_cleanupHintViews;
- (void)_mainQueue_cleanupShapeLayers;
- (void)_mainQueue_removeShapeLayer:(id)a0;
- (void)_mainQueue_showHintsWithPrimaryQuickActions:(id)a0 completion:(id /* block */)a1;
- (void)_mainQueue_showUIForQuickActions:(id)a0;
- (BOOL)_shouldShowHintsForQuickActions:(id)a0;
- (void)animateConfirmationForQuickAction:(id)a0 completion:(id /* block */)a1;
- (void)refreshOverlaysIfNecessary;
- (void)stopCurrentOverlays;

@end
