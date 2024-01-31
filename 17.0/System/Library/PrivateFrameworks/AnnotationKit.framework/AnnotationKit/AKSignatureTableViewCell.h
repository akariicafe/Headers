@class UIImageView, UILabel, AKSignature;

@interface AKSignatureTableViewCell : UITableViewCell

@property (retain, nonatomic) AKSignature *signature;
@property (retain, nonatomic) UIImageView *signatureImageView;
@property (retain, nonatomic) UILabel *signatureLabel;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)accessibilityValue;
- (void)_setImageFromSignature;
- (void)_setLabelFromSignature;

@end
