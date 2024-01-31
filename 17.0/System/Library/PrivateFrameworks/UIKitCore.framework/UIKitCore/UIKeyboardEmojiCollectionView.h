@class NSMutableArray, UIResponder, UIKeyboardEmojiGraphicsTraits, UIKeyboardEmojiCollectionViewCell;

@interface UIKeyboardEmojiCollectionView : UICollectionView {
    UIKeyboardEmojiCollectionViewCell *_lastTouchedEmojiCell;
    NSMutableArray *_gestureRecognizersToEnable;
    BOOL _touchDidMove;
}

@property (nonatomic) BOOL isInSearchPopover;
@property (weak, nonatomic) UIResponder *hitTestResponder;
@property (readonly) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)backgroundColor;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)_currentScreenScale;
- (id)closestCellForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)disableConflictingGestureRecognizers;
- (void)enableConflictingGestureRecognizers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1 emojiGraphicsTraits:(id)a2;
- (void)willCancelVariants:(id)a0;

@end
