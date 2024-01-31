@class PHImportController, NSArray, NSString, NSMutableArray, PHImportSource;

@interface PXImportSourcesManager : PXObservable <PHImportControllerObserver, PHImportSourceObserver> {
    NSMutableArray *_importSources;
    PHImportSource *_URLImportSource;
}

@property (class, readonly, nonatomic) PXImportSourcesManager *sharedController;

@property (readonly, nonatomic) PHImportController *importController;
@property (readonly, nonatomic) NSArray *importSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)capabilitiesDidChangeForImportSource:(id)a0;
- (void)importController:(id)a0 addedImportSource:(id)a1;
- (void)importController:(id)a0 failedToAddImportSource:(id)a1 exceptions:(id)a2;
- (void)importController:(id)a0 removedImportSource:(id)a1;
- (void)importSource:(id)a0 didAddAssets:(id)a1;
- (void)importSource:(id)a0 didRemoveAssets:(id)a1;
- (void)userHasTrustedHostForImportSource:(id)a0;
- (void)userRequiredToTrustHostForImportSource:(id)a0;
- (void)_notifyObserversDidAddImportSource:(id)a0;
- (void)_notifyObserversDidRemoveImportSource:(id)a0;
- (void)_notifyObserversDidUpdateImportSource:(id)a0;
- (void)_updateImportURLSource:(id)a0;
- (void)importSource:(id)a0 didDeleteAsset:(id)a1;
- (void)importSource:(id)a0 didUpdateAsset:(id)a1 propertyMask:(unsigned short)a2;
- (void)nameDidChangeForImportSource:(id)a0;

@end
