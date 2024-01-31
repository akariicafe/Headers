@class LNAutoShortcutLocalizedPhrase, LNAutoShortcut, NSArray, NSString, NSNumber;

@interface WFAutoShortcutContextualAction : WFContextualAction

@property (readonly, nonatomic) WFAutoShortcutContextualAction *parentAction;
@property (readonly, nonatomic) unsigned long long orderOfShortcut;
@property (readonly, nonatomic) NSNumber *cachedProminentDisplayEligibility;
@property (readonly, nonatomic) LNAutoShortcut *autoShortcut;
@property (readonly, nonatomic) LNAutoShortcutLocalizedPhrase *phrase;
@property (readonly, copy, nonatomic) NSArray *alternativePhrases;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic, getter=isEligibleForProminentDisplay) BOOL eligibleForProminentDisplay;

+ (id)spotlightDomainIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)allActionsForAutoShortcut:(id)a0 bundleIdentifier:(id)a1 startIndex:(unsigned long long)a2;
+ (id)autoShortcutContextualActionsByQueryingEligibilityForProminentDisplay:(id)a0;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;

- (unsigned long long)hash;
- (id)creationDate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)displayOrder;
- (id)spotlightItem;
- (id)workflowRunKind;
- (id)actionBySettingEligibilityForProminentDisplay:(BOOL)a0;
- (id)actionForRunningFromSpotlight;
- (BOOL)definesDisplayOrder;
- (id)initWithAutoShortcut:(id)a0 bundleIdentifier:(id)a1;
- (id)initWithAutoShortcut:(id)a0 identifier:(id)a1 phrase:(id)a2 alternativePhrases:(id)a3 bundleIdentifier:(id)a4 actionIdentifier:(id)a5 orderOfShortcut:(unsigned long long)a6 parentAction:(id)a7 prominentDisplayEligibility:(id)a8;
- (id)initWithAutoShortcut:(id)a0 phrase:(id)a1 alternativePhrases:(id)a2 bundleIdentifier:(id)a3;
- (id)relatedApp;
- (void)wf_launchAppIfNeededUsingSurface:(unsigned long long)a0;

@end
