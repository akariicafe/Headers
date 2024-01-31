@class AMRedModeSettings, NSString, AMRedModeTriggerManagerContext, NSHashTable, AMAmbientIlluminationTrigger;

@interface AMRedModeTriggerManager : NSObject <AMAmbientIlluminationTriggerDelegate, PTSettingsKeyObserver> {
    AMRedModeTriggerManagerContext *_initializationContext;
    AMAmbientIlluminationTrigger *_ambientIlluminationTrigger;
    AMRedModeSettings *_redModeSettings;
    NSHashTable *_observers;
}

@property (nonatomic, getter=isRedModeTriggered, setter=_setRedModeTriggered:) BOOL redModeTriggered;
@property (nonatomic, getter=isRedModeDetectionEnabled) BOOL redModeDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)initWithContext:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_updateTriggerState;
- (id)_getNewAmbientIlluminationTrigger;
- (void)ambientIlluminationTrigger:(id)a0 didUpdateTriggered:(BOOL)a1;

@end
