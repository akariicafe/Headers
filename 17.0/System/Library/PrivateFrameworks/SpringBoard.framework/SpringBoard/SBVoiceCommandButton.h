@class NSString, SBSiriHardwareButtonInteraction, SBHIDButtonStateArbiter, SBHardwareButtonCoordinator;

@interface SBVoiceCommandButton : NSObject <SBHIDButtonStateDelegate, SBHardwareButtonColluding>

@property (retain, nonatomic) SBHIDButtonStateArbiter *buttonArbiter;
@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriHardwareButtonInteraction;
@property (nonatomic) BOOL isLongPressRecognized;
@property (retain, nonatomic) SBHardwareButtonCoordinator *hardwareButtonCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performActionsForButtonUp:(id)a0;
- (void)cancelHardwareButtonPress;
- (id)hardwareButtonIdentifier;
- (void)performActionsForButtonDown:(id)a0;
- (void)performActionsForButtonLongPress:(id)a0;
- (void).cxx_destruct;
- (void)handleButtonEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)_isPermittedToBegin;

@end
