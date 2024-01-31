@class CSUAFAssetManager, CSLanguageCodeUpdateMonitor, CSUAFDownloadMonitor, NSString, NSMutableDictionary, CSVoiceTriggerAssetDownloadMonitor, CSAsset, CSAssetManager, CSOnDeviceCompilationHandler, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, CSUAFDownloadMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) CSAsset *cachedAsset;
@property (retain) NSMutableDictionary *cachedEndpointAssets;
@property (retain, nonatomic) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (retain, nonatomic) CSUAFDownloadMonitor *uafAssetDownloadMonitor;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;
@property (retain, nonatomic) CSOnDeviceCompilationHandler *onDeviceCompilationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)assetDownloadMonitorDelegate:(id)a0 assetType:(unsigned long long)a1;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)a0;
- (void)_checkNewAssetAvailablity;
- (void)triggerAssetRefresh;
- (id)init;
- (void)start;
- (void)_handleVoiceTriggerAssetWithCompletion:(id /* block */)a0;
- (void)_checkNewAssetAvailablityForEndpoint;
- (id)initWithVoiceTriggerAssetDownloadMonitor:(id)a0 languageCodeUpdateMonitor:(id)a1 uafAssetDownloadMonitor:(id)a2 assetManager:(id)a3 uafAssetManager:(id)a4 disableOnDeviceCompilation:(BOOL)a5;
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;
- (void)_handleEndpointVoiceTriggerAsset:(id)a0 completion:(id /* block */)a1;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1;

@end
