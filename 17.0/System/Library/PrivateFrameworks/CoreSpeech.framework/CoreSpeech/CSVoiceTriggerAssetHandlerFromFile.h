@class CSOnDeviceCompilationHandler;

@interface CSVoiceTriggerAssetHandlerFromFile : CSVoiceTriggerAssetHandler {
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;
}

- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)triggerAssetRefresh;
- (id)init;
- (void)start;
- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;

@end
