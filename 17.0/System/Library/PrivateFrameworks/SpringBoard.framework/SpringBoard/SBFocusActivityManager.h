@class NSString, DNDModeSelectionService, NSSet, SBFocusEnablementIndicatorSystemApertureActivityElement, SBSystemActionCompoundPreviewAssertion, SBFocusActivityPickerTransientOverlayViewController, NSObject, FCUIFocusEnablementIndicatorManager;
@protocol OS_dispatch_queue, SAInvalidatable;

@interface SBFocusActivityManager : NSObject <FCUISystemApertureElementProviding, SBFocusActivityPickerTransientOverlayViewControllerDelegate, DNDModeSelectionServiceListener, SBSystemActionValidating> {
    DNDModeSelectionService *_modeSelectionService;
    NSSet *_availableModes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _availableModesLock;
    NSObject<OS_dispatch_queue> *_availableModesFetchQueue;
    SBFocusActivityPickerTransientOverlayViewController *_transientOverlay;
    FCUIFocusEnablementIndicatorManager *_focusEnablementIndicatorManager;
    SBSystemActionCompoundPreviewAssertion *_compoundPreviewAssertion;
    id<SAInvalidatable> _focusElementAssertion;
    SBFocusEnablementIndicatorSystemApertureActivityElement *_focusElement;
    NSString *_previewingModeIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modeSelectionService:(id)a0 didReceiveUpdatedActiveModeAssertion:(id)a1 stateUpdate:(id)a2;
- (void)modeSelectionService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void)modeSelectionService:(id)a0 didReceiveModesUpdate:(id)a1;
- (void).cxx_destruct;
- (id)createFocusElementForActivityDescription:(id)a0 enabled:(BOOL)a1;
- (id)createPersistentFocusElementForActivityDescription:(id)a0 enabled:(BOOL)a1;
- (void)focusActivityPickerTransientOverlayViewController:(id)a0 didDismiss:(BOOL)a1;
- (BOOL)shouldPreviewSystemAction:(id)a0;

@end
