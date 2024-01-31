@class UIStackView, NSString, UIView, SFAccountIconSharingBadgeImageCoordinator, UIImageView, UITextField, WBSSavedAccount, UILabel;
@protocol SFAccountHeaderViewCellDelegate;

@interface SFAccountHeaderViewCell : UITableViewCell <UITextFieldDelegate> {
    UIImageView *_iconImageView;
    UILabel *_monogramLabel;
    UIImageView *_keyIconImageView;
    UIView *_monogramBackgroundView;
    UIStackView *_labelStackView;
    NSString *_customTitle;
    UILabel *_lastModifiedDateLabel;
    NSString *_highLevelDomain;
    SFAccountIconSharingBadgeImageCoordinator *_badgeImageCoordinator;
}

@property (weak, nonatomic) id<SFAccountHeaderViewCellDelegate> delegate;
@property (retain, nonatomic) UITextField *titleTextField;
@property (retain, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setMonogramBackgroundColor:(id)a0;
- (void)_hideMonogramIcon;
- (void)_showMonogramIconWithBackgroundColor:(id)a0;
- (void)_textFieldChanged:(id)a0;
- (void)_updateSharedAccountBadgeImageViewIfNecessary;
- (void)commitCustomTitle;
- (void)setHeaderTitleForHighLevelDomain:(id)a0 customTitle:(id)a1;
- (void)setLastModifiedDateString:(id)a0;

@end
