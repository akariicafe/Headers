@class UIScreen, UIColor, UITraitCollection;

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying>

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) UIColor *tintColor;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithScreen:(id)a0;
- (void)_collectStateFromScreen:(id)a0;
- (void)_collectStateFromView:(id)a0;
- (void)_collectStateFromVisualStyleViewState:(id)a0;
- (BOOL)_stateEqualToVisualStyleViewState:(id)a0;
- (id)copyWithTraitCollection:(id)a0;
- (id)initWithPropertiesFromTopLevelView:(id)a0;

@end
