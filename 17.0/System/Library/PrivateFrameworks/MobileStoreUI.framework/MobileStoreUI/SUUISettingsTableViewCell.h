@class UIImageView, SUUISettingDescriptionView;

@interface SUUISettingsTableViewCell : UITableViewCell {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    UIImageView *_disclosureChevron;
    BOOL _hasDisclosureChevron;
    SUUISettingDescriptionView *_settingDescriptionView;
}

@property (readonly, nonatomic) SUUISettingDescriptionView *settingDescriptionView;

- (void)setBackgroundColor:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)displaySettingDescriptionView:(id)a0;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end
