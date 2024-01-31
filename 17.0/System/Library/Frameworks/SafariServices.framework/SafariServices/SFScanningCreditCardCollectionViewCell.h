@class NSString, UIImageView, UILabel;

@interface SFScanningCreditCardCollectionViewCell : UICollectionViewCell {
    UIImageView *_scanningImageView;
    UILabel *_scanCardLabel;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

+ (double)desiredCellWidth;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
