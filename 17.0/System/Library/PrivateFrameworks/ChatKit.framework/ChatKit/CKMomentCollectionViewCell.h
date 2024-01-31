@class NSMutableArray, CKFullScreenEffect;

@interface CKMomentCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKFullScreenEffect *effect;
@property (retain, nonatomic) NSMutableArray *effectViews;

+ (id)reuseIdentifier;

- (void)animate;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)addEffectView:(id)a0;
- (void)setupEffectIfNeeded;

@end
