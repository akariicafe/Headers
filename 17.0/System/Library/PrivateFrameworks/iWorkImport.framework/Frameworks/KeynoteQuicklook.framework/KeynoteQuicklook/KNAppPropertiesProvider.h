@class NSArray;

@interface KNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, nonatomic) NSArray *powerPointDocumentTypes;

- (id)applicationName;
- (id)cloudKitContainerIdentifier;
- (id)applicationDisplayName;
- (id)appChartPropertyOverrides;
- (id)applicationTemplateVariantsForLocale:(id)a0;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)importableDocumentTypes;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (id)cloudKitSyncContainerIdentifier;
- (BOOL)appIsAlwaysInDarkMode;
- (id)bladerunnerContainerIdentifier;
- (id)documentShareURLScheme;
- (id)documentTypeDisplayNameForSharingInvitation;
- (BOOL)requiresFourOneDocumentReadWarningForInlineDrawables;
- (BOOL)shouldDisallowDrawableCommandsWithoutParentInfo;
- (BOOL)shouldWarnForHDRContent;
- (BOOL)supportsFrehandAnimations;
- (unsigned long long)webVideoRequiredDocumentWriteVersion;

@end
