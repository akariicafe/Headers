@interface WFSetSilentModeAction : WFReversibleLinkAction <WFStaccatoLinkAction>

+ (Class)settingsClientClass;

- (id)categories;
- (id)icon;
- (id)descriptionDictionary;
- (id)displayableAppDescriptor;
- (id)iconSymbolName;
- (id)defaultParameterStatesForStaccato;
- (id)hiddenParameterKeysForStaccato;
- (id)staccatoNameOverride;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)a0;
- (id)requiredResources;
- (id)reversibleSettingParameterKey;
- (BOOL)skipExecutingInSiri;
- (id)subcategoryForCategory:(id)a0;

@end
