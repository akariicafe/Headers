@interface DBSAlwaysOnViewController : PSListController

+ (id)alwaysOnSpecifierNamed:(id)a0;
+ (id)isAlwaysOnEnabled:(id)a0;

- (id)specifiers;
- (id)_alwaysOnDisplaySpecifier;
- (id)_showNotificationsSpecifier;
- (id)_showWallpaperSpecifier;
- (id)_updatesForSpecifiers:(id)a0 isAlwaysOnEnabled:(BOOL)a1 animated:(BOOL)a2;
- (void)setAlwaysOnDisplayEnabled:(id)a0 specifier:(id)a1;

@end
