@class NSString, NSMutableDictionary;
@protocol SBDisplayAssertionCoordinatorDelegate;

@interface SBDisplayAssertionCoordinator : NSObject <_SBDisplayAssertionStackDelegate, SBDisplayAssertionProviding> {
    NSMutableDictionary *_assertionStackMap;
    NSMutableDictionary *_assertionPreferencesMap;
}

@property (weak, nonatomic) id<SBDisplayAssertionCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_createDisplayAssertionStackForRootDisplay:(id)a0;
- (id)acquireAssertionForDisplay:(id)a0 level:(unsigned long long)a1 deactivationReasons:(unsigned long long)a2 delegate:(id)a3;
- (void)activateAssertionsForDisplay:(id)a0;
- (void)assertionStack:(id)a0 updatedAssertionPreferences:(id)a1 oldPreferences:(id)a2;
- (void)invalidateAssertionForDerivedDisplayDisconnect:(id)a0;
- (void)rootDisplayDidConnect:(id)a0;
- (void)rootDisplayDidDisconnect:(id)a0;

@end
