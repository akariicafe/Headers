@class NSString, KNShow, KNRecordingSyncMaintainer;
@protocol KNDocumentRootDelegate;

@interface KNDocumentRoot : TSADocumentRoot <TSWPDrawableOLC, TSKModel, TSTResolverContainerNameProvider> {
    BOOL _isObservingRecording;
}

@property (retain, nonatomic) KNRecordingSyncMaintainer *recordingSyncMaintainer;
@property (weak, nonatomic) id<KNDocumentRootDelegate> delegate;
@property (retain, nonatomic) KNShow *show;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)localizeModelObject:(id)a0 withTemplateBundle:(id)a1 andLocale:(id)a2;

- (void)willClose;
- (id)theme;
- (void)setTheme:(id)a0;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (BOOL)isSharedReadOnly;
- (id)childEnumerator;
- (id)stylesheet;
- (void)documentDidLoad;
- (BOOL)isMultiPageForQuickLook;
- (void)prepareForSavingAsTemplate;
- (id)protected_defaultTextPresetOrdering;
- (void)setThemeForTemplateImport:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)UIStateForChart:(id)a0;
- (long long)compareLocationSortingInfo:(id)a0 toSortingInfo:(id)a1;
- (id)createViewStateRootForContinuation:(BOOL)a0;
- (id)freehandDrawingToolkitUIState;
- (id)knDelegate;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (id)nameForResolverContainer:(id)a0;
- (void)p_applicationDidBecomeActive:(id)a0;
- (void)p_applicationWillResignActive:(id)a0;
- (void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)a0;
- (void)p_thumbnailUpgradeForUnity20SlideNodes:(id)a0 andMasterSlideNodess:(id)a1;
- (void)preprocessForSaveAsTheme;
- (id)resolverContainerForName:(id)a0 caseSensitive:(BOOL)a1;
- (id)resolverContainerNameForResolver:(id)a0;
- (id)resolverContainerNamesMatchingPrefix:(id)a0;
- (id)resolverMatchingName:(id)a0 contextContainerName:(id)a1;
- (id)resolverMatchingName:(id)a0 contextResolver:(id)a1;
- (id)resolversMatchingPrefix:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)setDocumentLocale:(id)a0;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)a0;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (void)setUiState:(id)a0;
- (BOOL)shouldShowFloatingCommentInfo:(id)a0;
- (id)slideNodeForClearedShow;
- (double)stickyCommentScaleMultiplier;
- (id)stylesToNotResizeInStylesheet:(id)a0;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (BOOL)validateSlideNode:(id)a0;
- (BOOL)validateUIState:(id)a0;
- (id)warningLocationDescriptionForAffectedObjects:(id)a0 sortingInfo:(id *)a1;
- (unsigned long long)writingDirectionForStorage;

@end
