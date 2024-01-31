@class SBSystemActionCoachingController, NSString, NSHashTable, NSMutableArray, SBSoundController;
@protocol SBSystemActionExecuting, SBSystemActionDataSource, BSInvalidatable, SBSystemActionPreviewCoordinating;

@interface SBSystemActionControl : NSObject <SBSystemActionDataSourceObserver> {
    NSHashTable *_observers;
    NSHashTable *_actionValidators;
    NSMutableArray *_runningExecutors;
    id<SBSystemActionDataSource> _dataSource;
    id<SBSystemActionPreviewCoordinating> _previewCoordinator;
    SBSystemActionCoachingController *_coachingController;
    SBSoundController *_soundController;
    id<SBSystemActionExecuting> _previewingExecutor;
    id<BSInvalidatable> _feedbackActivationAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)systemActionDataSource:(id)a0 didUpdateSelectedAction:(id)a1;

@end
