@class SVXSessionManager, NSString, NSMutableDictionary, SVXDeviceSetupManager, SVXSpeechSynthesizer, SVXModule;

@interface SVXClientServiceServer : NSObject <SVXModuleInstance> {
    SVXModule *_module;
    NSMutableDictionary *_connectionsByUUID;
    SVXDeviceSetupManager *_deviceSetupManager;
    SVXSessionManager *_sessionManager;
    SVXSpeechSynthesizer *_speechSynthesizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addConnection:(id)a0;
- (void)removeConnection:(id)a0;
- (void)dealloc;
- (void)addConnection:(id)a0;
- (void).cxx_destruct;
- (void)_removeConnection:(id)a0;
- (id)initWithModule:(id)a0;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)_removeAllConnections;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;

@end
