@class NSString, PXUIFilterController;

@interface PXCuratedLibraryShowFiltersActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate>

@property (retain, nonatomic) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (BOOL)performerResetsAfterCompletion;
- (id)menuElement;
- (BOOL)_isAlreadyDone;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)filterControllerDidClose:(id)a0;

@end
