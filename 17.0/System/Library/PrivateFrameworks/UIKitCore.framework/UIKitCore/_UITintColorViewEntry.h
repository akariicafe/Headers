@class UIColor;

@interface _UITintColorViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) UIColor *tintColor;

- (void)applyRequestedEffectToView:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)applyIdentityEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
