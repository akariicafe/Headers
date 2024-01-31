@class UIColor, UIVisualEffect, UIButtonConfiguration;

@interface _UIEditMenuPlatformMetrics : NSObject <_UIVisualStyleProviding>

@property (copy, nonatomic) id /* block */ containerViewConfigurator;
@property (copy, nonatomic) id /* block */ menuBackgroundConfigurator;
@property (copy, nonatomic) UIVisualEffect *menuBackgroundEffect;
@property (copy, nonatomic) UIVisualEffect *menuHighlightBackgroundEffect;
@property (copy, nonatomic) UIColor *menuHighlightBackgroundColor;
@property (copy, nonatomic) UIVisualEffect *separatorEffect;
@property (copy, nonatomic) UIColor *separatorEffectColor;
@property (nonatomic) BOOL showsSeparatorBetweenItems;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double horizontalMenuMaximumWidth;
@property (nonatomic) double horizontalMenuCornerRadius;
@property (nonatomic) double verticalMenuCornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;
@property (nonatomic) double arrowSideRadius;
@property (nonatomic) double arrowTipRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } menuItemMargins;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } cellBackgroundInsets;
@property (copy, nonatomic) id /* block */ cellBackgroundProvider;
@property (copy, nonatomic) id /* block */ cellBackgroundUpdater;
@property (copy, nonatomic) UIButtonConfiguration *pageButtonConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
