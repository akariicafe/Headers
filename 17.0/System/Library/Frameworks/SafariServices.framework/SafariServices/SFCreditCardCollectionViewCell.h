@class UIStackView, NSString, UIImageView, UIVisualEffectView, UILabel, WBSCreditCardData;

@interface SFCreditCardCollectionViewCell : UICollectionViewCell {
    UIStackView *_topLevelStackView;
    UIStackView *_cardDescriptionStackView;
    UIImageView *_cardArt;
    UILabel *_cardNameLabel;
    UIVisualEffectView *_vibrantWalletImageView;
    UILabel *_cardDescriptionLabel;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) WBSCreditCardData *cardData;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureViewWithCardData:(id)a0;

@end
