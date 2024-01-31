@class NSString, FCUIFocusEnablementIndicatorSystemApertureElement, FCUIFocusEnablementIndicatorSystemApertureActivityElement;
@protocol SAInvalidatable, FCUISystemApertureElementProviding, SAElementRegistering;

@interface FCUIFocusEnablementIndicatorSystemApertureManager : FCUIFocusEnablementIndicatorManager <FCActivityManagerObserving> {
    id<SAElementRegistering> _elementRegistrar;
    id<FCUISystemApertureElementProviding> _elementProvider;
    id<SAInvalidatable> _registeredElementAssertion;
    FCUIFocusEnablementIndicatorSystemApertureElement *_lastPresentedElement;
    id<SAInvalidatable> _registeredPersistentElementAssertion;
    FCUIFocusEnablementIndicatorSystemApertureActivityElement *_lastPresentedPersistentElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithSystemApertureElementRegistrar:(id)a0;

- (void).cxx_destruct;
- (id)_initWithSystemApertureElementRegistrar:(id)a0;
- (void)postActivity:(id)a0 enabled:(BOOL)a1;
- (id)postPersistentActivity:(id)a0 enabled:(BOOL)a1 systemApertureElementProvider:(id)a2;
- (void)revokeWithReason:(id)a0;
- (BOOL)shouldKeepPresentingAfterActiveActivityDidChange:(id)a0 lastActivity:(id)a1;

@end
