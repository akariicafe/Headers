@class TPAppPropertiesProvider;

@interface TPAppDelegate : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) TPAppPropertiesProvider *tp_sharedPropertiesProvider;

+ (id)sharedDelegate;
+ (id)defaultFontForNewBasicDocumentsFontName;
+ (double)defaultFontForNewBasicDocumentsPointSize;

- (id)init;
- (void)dealloc;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (BOOL)textInspectorShowsMoreSubpane;
- (void)createStringsProviders;
- (id)equationEditorAPDID;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (void)registerSOSClassTypeMappings;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (BOOL)imageGalleryCaptionsUsePlaceholderText;
- (void)customizeHyperlinkViewController:(id)a0 documentRoot:(id)a1;
- (void)p_localeChanged:(id)a0;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)supportsLinkedTextBoxes;
- (BOOL)supportsQuickFormatBar;

@end
