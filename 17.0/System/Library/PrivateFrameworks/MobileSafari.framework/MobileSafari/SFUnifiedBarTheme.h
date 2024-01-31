@class UIColor, NSString, SFUnifiedTabBarItemTitleContainerViewTheme;

@interface SFUnifiedBarTheme : SFThemeColorBarTheme <SFUnifiedTabBarItemTitleThemeProviding>

@property (class, readonly, nonatomic) SFUnifiedBarTheme *defaultTheme;

@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) UIColor *tabAccessoryButtonTintColor;
@property (readonly, nonatomic) UIColor *activeTabAccessoryButtonTintColor;
@property (readonly, nonatomic) UIColor *inputFieldAccessoryButtonTintColor;
@property (readonly, nonatomic) UIColor *inputFieldSecondaryAccessoryButtonTintColor;
@property (readonly, nonatomic) UIColor *selectedMenuButtonTintColor;
@property (readonly, nonatomic) UIColor *separatorColor;
@property (readonly, nonatomic) UIColor *progressBarTintColor;
@property (readonly, nonatomic) UIColor *tabProgressBarTintColor;
@property (readonly, nonatomic) UIColor *activeTabProgressBarTintColor;
@property (readonly, nonatomic) UIColor *tabControlsTintColor;
@property (readonly, nonatomic) UIColor *activeTabControlsTintColor;
@property (readonly, nonatomic) UIColor *overridePlatterColor;
@property (readonly, nonatomic) UIColor *activeTabFieldTintColor;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *titleTheme;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *tabTitleTheme;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *activeTabTitleTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBarTintStyle:(long long)a0 preferredBarTintColor:(id)a1 controlsTintColor:(id)a2;
- (void).cxx_destruct;

@end
