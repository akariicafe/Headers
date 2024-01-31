@class UIView;

@interface PXGadgetUICollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *gadgetContentView;

+ (Class)_contentViewClass;

- (id)focusEffect;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateFocusRing;

@end
