@class NSString, NSMutableSet, NSHashTable;
@protocol SBUIBiometricResource, BSInvalidatable;

@interface CSUserPresenceMonitor : NSObject <CSEventHandling> {
    id<SBUIBiometricResource> _biometricResource;
    NSMutableSet *_activationReasons;
    id<BSInvalidatable> _faceDetectAssertion;
    NSHashTable *_observers;
    BOOL _coverSheetResignedActive;
}

@property (readonly, nonatomic) BOOL userPresenceDetectedSinceWake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)synthesizeUserPresenceForReason:(id)a0;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_setUserPresenceDetectedSinceWake:(BOOL)a0;
- (void)disableDetectionForReason:(id)a0;
- (BOOL)_handleBiometricEvent:(unsigned long long)a0;
- (void)_updateFaceDetectionState;
- (id)initWithBiometricResource:(id)a0;
- (void)conformsToCSEventHandling;
- (void).cxx_destruct;
- (BOOL)_isFaceDetectPermitted;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)isUserPresenceDetectionSupported;
- (void)enableDetectionForReason:(id)a0;
- (void)addObserver:(id)a0;
- (void)_monitorForInjectedUserPresence;
- (BOOL)handleEvent:(id)a0;

@end
