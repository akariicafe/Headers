@class SFFluidCollectionView, NSArray;

@interface SFFluidCollectionViewInteraction : NSObject

@property (weak, nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (readonly, nonatomic) NSArray *gestureRecognizers;

- (void)cancelInteraction;
- (void).cxx_destruct;
- (id)transformLayoutAttributes:(id)a0;

@end
