@protocol NPKPassSelectionFieldDetectorAssertionDelegate;

@interface NPKPassSelectionFieldDetectorAssertion : NPKTransientAssertion

@property (weak, nonatomic) id<NPKPassSelectionFieldDetectorAssertionDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_resyncState;
- (void)didEnterFieldForPassesWithUniqueIDs:(id)a0;

@end
