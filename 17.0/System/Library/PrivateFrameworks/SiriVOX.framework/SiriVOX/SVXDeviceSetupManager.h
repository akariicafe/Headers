@class NSDate, NSString, SVXSessionManager, SVXModule, NSMutableDictionary, SVXDeviceSetupFlowScene, SVXDeviceSetupAnnouncer, SVXSpeechSynthesizer, SVXDeviceSetupContext;

@interface SVXDeviceSetupManager : NSObject <SVXModuleInstance, SVXSessionActivationListening> {
    SVXModule *_module;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSessionManager *_sessionManager;
    SVXDeviceSetupAnnouncer *_announcer;
    NSMutableDictionary *_contextsByUUID;
    NSDate *_beginDate;
    NSDate *_endDate;
    SVXDeviceSetupFlowScene *_activatedDeviceSetupFlowScene;
    SVXDeviceSetupContext *_effectiveContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)getContextWithCompletion:(id /* block */)a0;
- (void)prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)_prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_setContext:(id)a0 forUUID:(id)a1;
- (void)_setEffectiveContext:(id)a0;
- (void)_updateEffectiveContext;
- (void)sessionManager:(id)a0 didActivateWithContext:(id)a1;
- (void)setContext:(id)a0 forUUID:(id)a1;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;

@end
