@class NSSet, NSString, NSHashTable, BLSHBacklightInactiveEnvironmentSession;
@protocol BSInvalidatable;

@interface SBBacklightEnvironmentSessionProvider : NSObject <BLSHBacklightInactiveEnvironmentSessionObserving, BLSHBacklightEnvironmentSessionProviding> {
    NSHashTable *_backlightEnvironmentSceneProviders;
    NSHashTable *_backlightSceneHostEnvironmentProviders;
    NSHashTable *_observers;
    id<BSInvalidatable> _presentationUpdateLiveRenderAssertion;
    BOOL _springBoardBootCompleted;
}

@property (retain, nonatomic, setter=_setCurrentSession:) BLSHBacklightInactiveEnvironmentSession *_currentSession;
@property (readonly, copy, nonatomic) NSSet *currentPresentationBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_rebuildPresentation;
- (id)init;
- (void)unregisterBacklightSceneHostEnvironmentProvider:(id)a0;
- (void)removeObserver:(id)a0;
- (void)unregisterBacklightEnvironmentSceneProvider:(id)a0;
- (void)didEndInactiveEnvironmentSession:(id)a0;
- (id)_buildPresentation;
- (id)createInactiveEnvironmentSession;
- (void)registerBacklightSceneHostEnvironmentProvider:(id)a0;
- (void)_notifyObserversOfPresentation;
- (void).cxx_destruct;
- (void)registerBacklightEnvironmentSceneProvider:(id)a0;
- (id)_backlightPresentationEntries;
- (void)inactiveEnvironmentSession:(id)a0 didUpdateToPresentation:(id)a1;
- (void)addObserver:(id)a0;
- (void)invalidateBacklightSceneHostEnvironmentsForProvider:(id)a0;
- (void)invalidateBacklightScenesForProvider:(id)a0;

@end
