@class NSHashTable, CSUAFAssetManager, CSUAFDownloadMonitor, CSLanguageCodeUpdateMonitor, NSString, NSObject, CSAsset, CSAssetManager;
@protocol OS_dispatch_queue;

@interface CSAttSiriMitigationAssetHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate, CSUAFDownloadMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;
@property (retain, nonatomic) CSUAFDownloadMonitor *uafDownloadMonitor;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (nonatomic) BOOL overrideEnabled;
@property (retain, nonatomic) NSString *overridePath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)assetDownloadMonitorDelegate:(id)a0 assetType:(unsigned long long)a1;
- (void)triggerAssetRefresh;
- (void)notifyObservers:(id)a0 endpointId:(id)a1;
- (id)init;
- (void)registerObserver:(id)a0;
- (void)getMitigationAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)start;
- (void)unregisterObserver:(id)a0;
- (void)_getMitigationAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)getNeuralCombinerConfigFile;
- (id)initWithAssetManager:(id)a0 withUAFAssetManager:(id)a1 withUAFDownloadMonitor:(id)a2 withLanguageCodeUpdateMonitor:(id)a3 withAssetOverrideFlag:(BOOL)a4 withOverrideAssetPath:(id)a5;
- (void)_receivedNewAssetUpdate:(id)a0;

@end
