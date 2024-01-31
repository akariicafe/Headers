@class WFContextualAction, WFExecutableAppShortcutIdentifier;

@interface WFConfiguredStaccatoTopHitAction : WFConfiguredStaccatoAction

@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) WFExecutableAppShortcutIdentifier *appShortcutIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContextualAction:(id)a0 appShortcutIdentifier:(id)a1 shortcutsMetadata:(id)a2;
- (id)previewIcon;

@end
