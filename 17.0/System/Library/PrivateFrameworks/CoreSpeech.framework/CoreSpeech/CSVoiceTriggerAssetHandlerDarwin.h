@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerDarwin : CSVoiceTriggerAssetHandler <CSRemoteAssetManagerDelegate, CSLanguageCodeUpdateMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)a0;
- (void)_checkNewAssetAvailablity;
- (id)init;
- (void)start;
- (void)CSRemoteAssetManagerDidDownloadNewAsset:(id)a0;
- (void).cxx_destruct;

@end
