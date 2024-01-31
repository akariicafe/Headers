@class UIColor, NSString, NSURL, UITabBarItem, UIViewController;

@interface SKUITabBarItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *tabIdentifier;
@property (nonatomic) BOOL alwaysCreatesRootViewController;
@property (nonatomic) long long barTintStyle;
@property (copy, nonatomic) NSString *metricsIdentifier;
@property (copy, nonatomic) NSURL *rootURL;
@property (retain, nonatomic) UIViewController *customRootViewController;
@property (retain, nonatomic) Class rootViewControllerClass;
@property (retain, nonatomic) UITabBarItem *underlyingTabBarItem;
@property (retain, nonatomic) UIColor *userInterfaceTintColor;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTabIdentifier:(id)a0;

@end
