@interface WFExternalDisplayTrigger : WFTrigger

@property (nonatomic) BOOL onConnect;
@property (nonatomic) BOOL onDisconnect;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (id)tintColor;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (Class)shortcutInputContentItemClass;
- (id)suggestedActions;

@end
