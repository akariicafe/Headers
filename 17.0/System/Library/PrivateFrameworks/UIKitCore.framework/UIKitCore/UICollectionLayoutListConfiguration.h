@class UIListSeparatorConfiguration, UIColor;

@interface UICollectionLayoutListConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) double _cornerRadius;
@property (copy, nonatomic, getter=_willBeginSwipingHandler, setter=_setWillBeginSwipingHandler:) id /* block */ _willBeginSwipingHandler;
@property (copy, nonatomic, getter=_didEndSwipingHandler, setter=_setDidEndSwipingHandler:) id /* block */ _didEndSwipingHandler;
@property (readonly, nonatomic) long long appearance;
@property (nonatomic) BOOL showsSeparators;
@property (copy, nonatomic) UIListSeparatorConfiguration *separatorConfiguration;
@property (copy, nonatomic) id /* block */ itemSeparatorHandler;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ trailingSwipeActionsConfigurationProvider;
@property (nonatomic) long long headerMode;
@property (nonatomic) long long footerMode;
@property (nonatomic) double headerTopPadding;

- (id)init;
- (id)_spiConfiguration;
- (void).cxx_destruct;
- (id)initWithAppearance:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
