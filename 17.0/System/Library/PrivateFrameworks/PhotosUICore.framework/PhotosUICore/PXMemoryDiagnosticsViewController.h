@class PHMemory;

@interface PXMemoryDiagnosticsViewController : PXCuratedAssetCollectionDiagnosticsViewController {
    PHMemory *_sourceMemory;
}

- (void).cxx_destruct;
- (id)initWithMemory:(id)a0;
- (id)assetsForCurationType:(long long)a0;
- (id)curationDebugInformationWithOptions:(id)a0;
- (BOOL)generateSectionTitles:(out id *)a0 andTableContent:(out id *)a1 forIndex:(long long)a2;
- (id)radarAttachmentURLs;
- (id)radarComponentInfoForRoute:(id)a0;
- (id)radarDescriptionTemplate;
- (id)radarRoutes;
- (id)radarTitleTemplate;
- (id)sourceDictionary;

@end
