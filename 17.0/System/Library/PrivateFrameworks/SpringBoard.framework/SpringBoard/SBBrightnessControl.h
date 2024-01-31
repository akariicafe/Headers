@class SBDisplayBrightnessController, NSString, SBKeyboardBrightnessController, SBHUDController;
@protocol SBBrightnessRouteControlling;

@interface SBBrightnessControl : NSObject <SBBrightnessRouteCoordinating, SBElasticHUDViewControllerDelegate, SBElasticBrightnessDataSource> {
    SBHUDController *_HUDController;
    SBKeyboardBrightnessController *_keyboardBrightnessController;
    SBDisplayBrightnessController *_displayBrightnessController;
    id<SBBrightnessRouteControlling> _activeController;
    BOOL _controlCenterIsPresented;
    BOOL _brightnessIncrementKeyIsDown;
    BOOL _brightnessDecrementKeyIsDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesKeyCommandsForRoute:(long long)a0;

- (void)elasticBrightnessViewControllerValueUpdatesDidEnd:(id)a0;
- (id)initWithHUDController:(id)a0;
- (void)cancelBrightnessKeyPressEvents;
- (void)_presentOrUpdateBrightnessHUDAsNecessaryForBrightnessLevel:(float)a0;
- (float)elasticValueViewControllerCurrentValue:(id)a0;
- (BOOL)elasticHUDViewControllerCanBePresented:(id)a0 withReason:(out id *)a1;
- (id)presentedBrightnessHUDViewController;
- (id)acquireBrightnessHUDHiddenAssertionForReason:(id)a0;
- (void)elasticBrightnessViewControllerValueUpdatesWillBegin:(id)a0;
- (BOOL)_HUDIsDisplayableWithReason:(out id *)a0;
- (BOOL)_HUDIsDisplayable;
- (void)setBrightnessLevel:(float)a0 forRoute:(long long)a1;
- (long long)elasticBrightnessViewControllerBrightnessRouteType:(id)a0;
- (id)_controllerForRoute:(long long)a0;
- (void)_controlCenterWillPresent:(id)a0;
- (void)_handleUpdateBrightnessIncrementKeyIsDown:(BOOL)a0 decrementKeyIsDown:(BOOL)a1;
- (void).cxx_destruct;
- (void)brightnessController:(id)a0 performCoordinatedBrightnessChangeForIncrementKeyDown:(BOOL)a1 decrementKeyDown:(BOOL)a2;
- (id)existingBrightnessHUDViewController;
- (void)_controlCenterWillDismiss:(id)a0;
- (void)_resetIdleTimerForUserInteractionIfNecessary;
- (void)elasticHUDViewControllerRequestsDismissal:(id)a0;
- (BOOL)elasticValueViewController:(id)a0 updateCurrentValue:(float)a1;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { } *)a0 forRoute:(long long)a1;
- (id)activeDataSource;
- (void)setActiveController:(id)a0;

@end
