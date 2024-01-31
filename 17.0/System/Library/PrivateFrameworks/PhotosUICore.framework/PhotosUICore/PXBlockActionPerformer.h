@class PXBlockActionConfiguration, PXBlockActionManager;

@interface PXBlockActionPerformer : PXActionPerformer

@property (readonly, copy, nonatomic) PXBlockActionConfiguration *configuration;
@property (weak, nonatomic) PXBlockActionManager *actionManager;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 configuration:(id)a1;

@end
