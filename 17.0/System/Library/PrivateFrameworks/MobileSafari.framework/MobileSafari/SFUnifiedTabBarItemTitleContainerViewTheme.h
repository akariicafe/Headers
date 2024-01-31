@class UIColor;

@interface SFUnifiedTabBarItemTitleContainerViewTheme : NSObject

@property (readonly, nonatomic) UIColor *primaryTextColor;
@property (readonly, nonatomic) UIColor *secondaryTextColor;
@property (readonly, nonatomic) UIColor *placeholderTextColor;
@property (readonly, nonatomic) UIColor *overrideTintColor;
@property (readonly, nonatomic) UIColor *themeColor;

- (id)init;
- (id)initWithPrimaryTextColor:(id)a0 secondaryTextColor:(id)a1 placeholderTextColor:(id)a2 overrideTintColor:(id)a3 themeColor:(id)a4;
- (void).cxx_destruct;
- (id)initWithPrimaryTextColor:(id)a0 secondaryTextColor:(id)a1 placeholderTextColor:(id)a2;

@end
