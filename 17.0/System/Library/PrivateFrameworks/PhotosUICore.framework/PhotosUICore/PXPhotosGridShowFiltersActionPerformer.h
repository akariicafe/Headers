@class NSString, PXUIFilterController;

@interface PXPhotosGridShowFiltersActionPerformer : PXPhotosGridActionPerformer <PXFilterControllerDelegate>

@property (retain, nonatomic) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activityType;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)menuElement;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)filterControllerDidClose:(id)a0;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
