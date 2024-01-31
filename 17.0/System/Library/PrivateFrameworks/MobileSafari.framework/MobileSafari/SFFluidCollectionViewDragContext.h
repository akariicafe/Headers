@class SFFluidCollectionView;

@interface SFFluidCollectionViewDragContext : NSObject

@property (readonly, weak, nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (retain, nonatomic) id dragDelegateContext;

- (void).cxx_destruct;
- (id)getValueWithDelegateObjectsOnSession:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithFluidCollectionView:(id)a0;
- (void)performWithDelegateObjectsOnSession:(id)a0 usingBlock:(id /* block */)a1;

@end
