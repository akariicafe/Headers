@interface PGCurator_PHAsset : PGCurator

- (void)addMoviesToAssets:(id)a0 fromFeeder:(id)a1 maximumNumberOfAssets:(unsigned long long)a2 debugInfo:(id)a3;
- (id)bestAssetsForFeeder:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (void)lastPassToCompleteItems:(id)a0 fromFeeder:(id)a1 options:(id)a2 maximumNumberOfItems:(unsigned long long)a3 debugInfo:(id)a4;
- (id)newMovieDeduperWithOptions:(id)a0;
- (id)newSemanticalDeduperWithOptions:(id)a0;

@end
