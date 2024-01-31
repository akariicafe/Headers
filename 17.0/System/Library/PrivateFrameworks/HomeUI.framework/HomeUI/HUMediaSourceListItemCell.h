@class UIImageView, UIActivityIndicatorView;

@interface HUMediaSourceListItemCell : HUTitleDescriptionCell

@property (retain, nonatomic) UIImageView *serviceIconView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
