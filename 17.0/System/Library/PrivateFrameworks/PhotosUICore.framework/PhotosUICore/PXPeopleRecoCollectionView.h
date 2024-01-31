@class PXPeopleSwipeSelectionManager;
@protocol PXPeopleRecoCollectionViewDelegate;

@interface PXPeopleRecoCollectionView : UICollectionView

@property (weak, nonatomic) id<PXPeopleRecoCollectionViewDelegate> recoCollectionViewDelegate;
@property (retain, nonatomic) PXPeopleSwipeSelectionManager *swipeSelectionManager;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)disableSwipeSelection;
- (void)enableSwipeSelectionWithDelegate:(id)a0;

@end
