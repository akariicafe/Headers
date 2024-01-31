@class NSString, UIImageView, UILabel, UIButton;
@protocol PKRewardsTierTableViewCellDelegate;

@interface PKRewardsTierTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_linkButton;
    BOOL _isTemplateLayout;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImageView *tierIcon;
@property (copy, nonatomic) NSString *link;
@property (weak, nonatomic) id<PKRewardsTierTableViewCellDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)linkAction;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
