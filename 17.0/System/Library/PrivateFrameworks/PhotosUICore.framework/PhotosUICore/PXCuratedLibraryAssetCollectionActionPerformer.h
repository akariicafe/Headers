@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;

- (id)initWithActionType:(id)a0 viewModel:(id)a1 assetCollectionReference:(id)a2;
- (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
