@interface STStorageAppCell : STStorageTableCell

+ (id)specifierForAppIdentifier:(id)a0;
+ (id)specifierForAppBundleURL:(id)a0;
+ (id)specifierForAppProxy:(id)a0;
+ (id)specifierForChildApp:(id)a0;
+ (id)specifierForStorageApp:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;

@end
