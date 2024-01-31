@class NSArray;

@interface TPAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, nonatomic) NSArray *iBADocumentTypes;
@property (readonly, nonatomic) NSArray *wordDocumentTypes;
@property (readonly, nonatomic) NSArray *textDocumentTypes;
@property (readonly, nonatomic) NSArray *rtfDocumentTypes;

- (id)applicationName;
- (id)cloudKitContainerIdentifier;
- (void).cxx_destruct;
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
- (id)bladerunnerContainerIdentifier;
- (id)documentShareURLScheme;
- (id)documentTypeDisplayNameForSharingInvitation;
- (BOOL)shouldDisallowDrawableCommandsWithoutParentInfo;
- (BOOL)supportsFrehandAnimations;
- (BOOL)supportsChangeTracking;
- (BOOL)requiresElevenOneDocumentReadWarningForObjectHyperlinks;
- (BOOL)fixWPKindsForTOCObjects;
- (BOOL)supportsTabNavigationOfCanvasObjects;
- (unsigned long long)minimumAllowedDiffsPerProcessingCount;
- (BOOL)shouldAdjustPositionAndSizeForMargins;
- (BOOL)shouldChartEditorTakeReadWriteLockForPreprocessChangesWorkaroundFor105413721;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)a0;
- (BOOL)supportsRTLColumns;

@end
