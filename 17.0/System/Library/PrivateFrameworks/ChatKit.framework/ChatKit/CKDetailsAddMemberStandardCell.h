@class UIImageView;

@interface CKDetailsAddMemberStandardCell : CKDetailsAddMemberCell

@property (retain, nonatomic) UIImageView *addIcon;

+ (double)preferredHeight;

- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
