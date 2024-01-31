@interface PXCuratedLibraryToggleAspectFitActionPerformer : PXCuratedLibraryActionPerformer

- (id)activityType;
- (id)initWithViewModel:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activitySystemImageName;
- (void)performActionWithCompletionHandler:(id /* block */)a0;

@end
