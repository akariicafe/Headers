@class PXAssetReference, PXAssetCollectionReference;

@interface PXCuratedLibraryHitTestResult : PXGHitTestResult

@property (readonly, nonatomic) long long control;
@property (readonly, nonatomic) PXAssetReference *assetReference;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;

- (void).cxx_destruct;
- (id)initWithControl:(long long)a0 spriteReference:(id)a1 layout:(id)a2;
- (id)initWithControl:(long long)a0 spriteReference:(id)a1 layout:(id)a2 assetCollectionReference:(id)a3;
- (id)initWithControl:(long long)a0 spriteReference:(id)a1 layout:(id)a2 assetReference:(id)a3;
- (id)initWithControl:(long long)a0 spriteReference:(id)a1 layout:(id)a2 assetReference:(id)a3 assetCollectionReference:(id)a4;
- (id)initWithSpriteReference:(id)a0 layout:(id)a1 identifier:(id)a2 userData:(id)a3;

@end
