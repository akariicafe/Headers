@class UILabel;

@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) UILabel *countLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithAcknowledgmentTally:(id)a0;

@end
