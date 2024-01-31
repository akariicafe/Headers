@class NSArray, NSMutableArray;

@interface NPKStandaloneProvisioningNumericEntryCoordinator : NSObject

@property (retain, nonatomic) NSArray *providedFields;
@property (retain, nonatomic) NSMutableArray *completedFields;
@property (nonatomic) unsigned long long currentIndex;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_invokeCompletionHandler;
- (void)_showCurrentPasscodePromptOrComplete;
- (void)_showNextPasscodePromptOrComplete;
- (void)requestNumericInputForFields:(id)a0 completion:(id /* block */)a1;

@end
