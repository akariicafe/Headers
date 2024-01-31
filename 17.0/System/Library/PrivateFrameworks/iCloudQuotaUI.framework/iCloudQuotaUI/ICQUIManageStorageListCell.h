@class PSSpecifier;

@interface ICQUIManageStorageListCell : PSTableCell {
    PSSpecifier *_currentSpecifier;
}

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)getLazyIcon;
- (void).cxx_destruct;
- (id)_settingsIconCacheForAppInfo:(id)a0;

@end
