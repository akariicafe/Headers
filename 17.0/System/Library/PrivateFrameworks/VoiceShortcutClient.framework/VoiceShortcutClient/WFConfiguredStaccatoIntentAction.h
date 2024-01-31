@class NSArray, NSDictionary, WFExecutableAppShortcutIdentifier, INAppIntent;

@interface WFConfiguredStaccatoIntentAction : WFConfiguredStaccatoAction

@property (readonly, nonatomic) INAppIntent *intent;
@property (readonly, nonatomic) NSDictionary *templateParameterValues;
@property (readonly, nonatomic) WFExecutableAppShortcutIdentifier *appShortcutIdentifier;
@property (readonly, nonatomic) NSArray *contextualParameters;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0 named:(id)a1 systemImageName:(id)a2;
- (id)initWithIntent:(id)a0 sectionIdentifier:(id)a1 named:(id)a2 appShortcutIdentifier:(id)a3 systemImageName:(id)a4 templateParameterValues:(id)a5 contextualParameters:(id)a6 shortcutsMetadata:(id)a7;
- (id)previewIcon;

@end
