@class NSString, UIImageView, UILabel, NSLayoutConstraint;

@interface WFTriggerImageCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imagePaddingTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imagePaddingBottomConstraint;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSString *objectIdentifier;

- (void)prepareForReuse;
- (void)setCornerRadius:(double)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setImage:(id)a0 width:(double)a1 height:(double)a2;
- (void)setImageTopPadding:(double)a0 bottomPadding:(double)a1;

@end
