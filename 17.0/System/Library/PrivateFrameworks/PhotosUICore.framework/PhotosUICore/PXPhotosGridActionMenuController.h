@class NSArray, PXPhotosViewModel;

@interface PXPhotosGridActionMenuController : PXActionMenuController

@property (copy, nonatomic) NSArray *additionalActionTypes;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (id)availableActionTypes;
- (id)availableHeaderActionTypes;
- (id)availableInternalActionTypes;
- (id)initWithActionManagers:(id)a0;
- (id)initWithActionManagers:(id)a0 viewModel:(id)a1;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
