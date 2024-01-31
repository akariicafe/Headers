@interface PXCuratedLibraryShareActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;

@end
