@class NSProgress, NSString, SUICProgressStateMachine;

@interface SUICProgressEventViewController : SUICProgressIndicatorViewController <SUICProgressIndicatorViewControllerDataSource> {
    SUICProgressStateMachine *_stateMachine;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
