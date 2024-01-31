@class SUUISettingsHeaderFooterDescriptionView;

@interface SUUISettingsTableHeaderFooterView : UITableViewHeaderFooterView {
    SUUISettingsHeaderFooterDescriptionView *_settingsHeaderFooterDescriptionView;
}

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)displaySettingsHeaderFooterDescriptionView:(id)a0;

@end
