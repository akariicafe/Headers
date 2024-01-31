@class _UILegibilitySettings;

@interface SBLockScreenPluginPresentation : NSObject <NSCopying>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } suggestedContentInsets;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
