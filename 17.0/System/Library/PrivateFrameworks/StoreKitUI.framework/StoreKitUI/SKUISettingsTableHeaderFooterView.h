@class SKUISettingsHeaderFooterDescriptionView;

@interface SKUISettingsTableHeaderFooterView : UITableViewHeaderFooterView {
    SKUISettingsHeaderFooterDescriptionView *_settingsHeaderFooterDescriptionView;
}

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)displaySettingsHeaderFooterDescriptionView:(id)a0;

@end
