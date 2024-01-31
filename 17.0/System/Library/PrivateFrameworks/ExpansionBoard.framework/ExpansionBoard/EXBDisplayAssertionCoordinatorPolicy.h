@class NSString, NSMutableDictionary, EXBDisplayMonitor;

@interface EXBDisplayAssertionCoordinatorPolicy : NSObject <EXBDisplayAssertionCoordinatorDelegate> {
    EXBDisplayMonitor *_displayMonitor;
    NSString *_disableIdleSleepReason;
    NSMutableDictionary *_rootIdentityToDisableSleepReasons;
    NSMutableDictionary *_rootIdentityToDisplayArrangementItems;
    NSMutableDictionary *_rootIdentityToCloneMirroringMode;
    NSMutableDictionary *_rootIdentityToCloneMirroringModeTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setCloneMirroringMode:(unsigned long long)a0 forDisplay:(id)a1;
- (id)init;
- (void)assertionCoordinator:(id)a0 updatedAssertionPreferences:(id)a1 oldPreferences:(id)a2 forDisplay:(id)a3;
- (void).cxx_destruct;
- (void)_setDisplayArrangementItem:(id)a0 forDisplay:(id)a1;
- (void)_setDisableIdleSleepReason:(id)a0 forDisplay:(id)a1;
- (id)initWithDisplayMonitor:(id)a0;

@end
