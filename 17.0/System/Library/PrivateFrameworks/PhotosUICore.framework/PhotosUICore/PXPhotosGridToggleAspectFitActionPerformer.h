@interface PXPhotosGridToggleAspectFitActionPerformer : PXPhotosGridActionPerformer

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (id)activityType;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (id)barButtonItemWithTarget:(id)a0 action:(SEL)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
