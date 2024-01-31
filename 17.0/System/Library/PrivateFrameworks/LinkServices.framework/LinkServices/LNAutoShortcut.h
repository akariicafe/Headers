@class NSString, NSArray, NSDictionary, LNAppShortcutParameterPresentation;

@interface LNAutoShortcut : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localeIdentifier;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSArray *localizedPhrases;
@property (readonly, copy, nonatomic) NSDictionary *localizedPhrasesByBasePhraseTemplate;
@property (readonly, copy, nonatomic) NSArray *orderedPhrases;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedShortTitle;
@property (readonly, copy, nonatomic) NSString *localizedActionDescription;
@property (readonly, copy, nonatomic) NSString *localizedAutoShortcutDescription;
@property (readonly, copy, nonatomic) NSString *systemImage;
@property (readonly, nonatomic) LNAppShortcutParameterPresentation *parameterPresentation;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) long long shortcutTileColor;
@property (readonly, copy, nonatomic) NSString *attributionBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *basePhraseTemplates;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 actionIdentifier:(id)a1 localizedPhrases:(id)a2 localizedTitle:(id)a3 localizedShortTitle:(id)a4 localizedAutoShortcutDescription:(id)a5 systemImageName:(id)a6;
- (id)initWithBundleIdentifier:(id)a0 localeIdentifier:(id)a1 actionIdentifier:(id)a2 orderedPhrases:(id)a3 localizedShortTitle:(id)a4 localizedAutoShortcutDescription:(id)a5 systemImageName:(id)a6;
- (id)initWithBundleIdentifier:(id)a0 localeIdentifier:(id)a1 actionIdentifier:(id)a2 orderedPhrases:(id)a3 localizedShortTitle:(id)a4 localizedAutoShortcutDescription:(id)a5 systemImageName:(id)a6 shortcutTileColor:(long long)a7;
- (id)initWithBundleIdentifier:(id)a0 localeIdentifier:(id)a1 actionIdentifier:(id)a2 orderedPhrases:(id)a3 localizedShortTitle:(id)a4 localizedAutoShortcutDescription:(id)a5 systemImageName:(id)a6 shortcutTileColor:(long long)a7 parameterPresentation:(id)a8;
- (id)initWithBundleIdentifier:(id)a0 localeIdentifier:(id)a1 actionIdentifier:(id)a2 orderedPhrases:(id)a3 localizedShortTitle:(id)a4 localizedAutoShortcutDescription:(id)a5 systemImageName:(id)a6 shortcutTileColor:(long long)a7 parameterPresentation:(id)a8 attributionBundleIdentifier:(id)a9 basePhraseTemplates:(id)a10;
- (id)initWithLocaleIdentifier:(id)a0 localizedApplicationName:(id)a1 basePhraseTemplateSubstitutions:(id)a2 actionIdentifier:(id)a3 phraseTemplates:(id)a4 title:(id)a5 shortTitle:(id)a6 actionDescription:(id)a7 systemImage:(id)a8;

@end
