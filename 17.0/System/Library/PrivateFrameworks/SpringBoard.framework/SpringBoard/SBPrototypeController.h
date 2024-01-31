@class SBRestartManager, NSString, NSXPCConnection, SBRootSettings, SBSBackgroundActivityAssertion, SBWindowScene, SBPrototypeDumpingGround;

@interface SBPrototypeController : NSObject <PTUIClient> {
    NSXPCConnection *_prototypingUIServerConnection;
    BOOL _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBSBackgroundActivityAssertion *_remotePrototypingAssertion;
}

@property (weak, nonatomic) SBRestartManager *restartManager;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_updateKeyHIDEventRouters;
- (BOOL)handleVolumeIncreaseEvent;
- (BOOL)_handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)_handlePrototypingEvent:(long long)a0;
- (void)_createConnection;
- (BOOL)handleRingerSwitchEvent;
- (void)restartSpringBoard;
- (id)rootSettings;
- (void)_updateRemoteEditingState;
- (void)killSpringBoard;
- (void).cxx_destruct;
- (void)_invalidateRemotePrototypingAssertion;
- (BOOL)handleVolumeDecreaseEvent;
- (void)_sendEvent:(long long)a0;
- (void)_acquireRemotePrototypingAssertion;
- (BOOL)_shouldSendEvent:(long long)a0;

@end
