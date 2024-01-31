@class UIStackView, UIImageView, UIActivityIndicatorView, UILabel, NSLayoutConstraint, UIButton;
@protocol SFAccountManagerPlatterWithDeclineButtonCellDelegate;

@interface SFAccountManagerPlatterWithDeclineButtonCell : UITableViewCell {
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_labelStackView;
    UIButton *_declineButton;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    unsigned long long _iconLeadingSpace;
    unsigned long long _iconTrailingSpace;
    struct CGSize { double width; double height; } _iconSize;
}

@property (class, readonly, nonatomic) unsigned long long contentInset;

@property (weak, nonatomic) id<SFAccountManagerPlatterWithDeclineButtonCellDelegate> delegate;
@property (nonatomic, getter=isShowingActivityIndicator) BOOL showingActivityIndicator;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_declineButtonPressed:(id)a0;
- (struct CGSize { double x0; double x1; })_declineButtonSize;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 iconLeadingSpace:(unsigned long long)a3 iconTrailingSpace:(unsigned long long)a4;
- (void)setTitle:(id)a0 subtitle:(id)a1 icon:(id)a2 shouldShowDeclineButton:(BOOL)a3;

@end
