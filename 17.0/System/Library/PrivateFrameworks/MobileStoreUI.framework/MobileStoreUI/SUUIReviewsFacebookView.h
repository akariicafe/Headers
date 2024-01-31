@class SUUIColorScheme, NSArray, SUUIClientContext, UIImageView, UILabel, UIView, UIButton;

@interface SUUIReviewsFacebookView : UIView {
    SUUIClientContext *_clientContext;
    UILabel *_friendsLabel;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UIView *_separatorView;
}

@property (retain, nonatomic) SUUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSArray *friendNames;
@property (readonly, nonatomic) UIButton *likeToggleButton;
@property (nonatomic, getter=isUserLiked) BOOL userLiked;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_composedStringForNames:(id)a0 userLiked:(BOOL)a1;
- (void)_reloadFriendNamesLabel;
- (void)_reloadLikeButtonState;
- (id)initWithClientContext:(id)a0;

@end
