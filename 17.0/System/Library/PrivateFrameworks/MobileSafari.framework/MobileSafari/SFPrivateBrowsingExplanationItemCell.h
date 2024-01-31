@class UIImageView, NSLayoutConstraint, UILabel, WBSPrivateBrowsingExplanationItem;

@interface SFPrivateBrowsingExplanationItemCell : UICollectionViewCell {
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewWidthConstraint;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) WBSPrivateBrowsingExplanationItem *item;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateImageViewWidth;

@end
