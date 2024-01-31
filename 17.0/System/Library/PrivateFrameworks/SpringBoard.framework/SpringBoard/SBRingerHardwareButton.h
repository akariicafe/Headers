@class SBRingerButtonParameters, NSString, SBRingerHardwareButtonSettings, SBSystemActionControl, SBSystemActionSuppressionManager, SBHardwareButtonCoordinator, SBHIDButtonStateArbiter;
@protocol BSInvalidatable;

@interface SBRingerHardwareButton : NSObject <SBHIDButtonStateDelegate, SBSystemActionControlObserver, SBSystemActionSuppressionManagerObserver, PTSettingsKeyObserver, SBHardwareButtonColluding> {
    SBRingerButtonParameters *_parameters;
    SBRingerHardwareButtonSettings *_settings;
    SBSystemActionControl *_systemActionControl;
    SBSystemActionSuppressionManager *_suppressionManager;
    BOOL _inhibitActions;
    id /* block */ _overrideButtonUpHandler;
    id<BSInvalidatable> _buttonActiveAssertion;
    id<BSInvalidatable> _systemActionPreviewingAssertion;
    id<BSInvalidatable> _systemActionPerformedInteractionAssertion;
    SBHIDButtonStateArbiter *_buttonArbiter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBHardwareButtonCoordinator *hardwareButtonCoordinator;

+ (id)new;

- (id)init;
- (void)performActionsForButtonUp:(id)a0;
- (void)cancelHardwareButtonPress;
- (id)hardwareButtonIdentifier;
- (void)performActionsForButtonDown:(id)a0;
- (void)performActionsForButtonLongPress:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)systemActionControlDidUpdateActionInteractionConfiguration:(id)a0;
- (void)systemActionSuppressionManager:(id)a0 didUpdateSuppressionStatus:(id)a1;

@end
