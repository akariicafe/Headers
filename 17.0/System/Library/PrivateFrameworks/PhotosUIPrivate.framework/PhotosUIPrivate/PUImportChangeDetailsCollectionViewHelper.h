@class UICollectionView;

@interface PUImportChangeDetailsCollectionViewHelper : NSObject

@property (weak, nonatomic) UICollectionView *collectionView;

- (id)initWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)applyChangeDetails:(id)a0 completionBlock:(id /* block */)a1;
- (void)transitionFromDataSource:(id)a0 toDataSource:(id)a1 changeHistory:(id)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
