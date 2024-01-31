@protocol SAAceCommand, SRUIFAceCommandRecordDelegate;

@interface SRUIFAceCommandRecord : NSObject

@property (nonatomic, setter=_setResult:) long long result;
@property (nonatomic, setter=_setNumberOfStartedActions:) long long numberOfStartedActions;
@property (nonatomic, setter=_setNumberOfStoppedActions:) long long numberOfStoppedActions;
@property (nonatomic, setter=_setNumberOfSuccessfullyCompletedActions:) long long numberOfSuccessfullyCompletedActions;
@property (nonatomic, setter=_setNumberOfUnsuccessfullyCompletedActions:) long long numberOfUnsuccessfullyCompletedActions;
@property (readonly, nonatomic) id<SAAceCommand> aceCommand;
@property (copy, nonatomic) id /* block */ commandCompletion;
@property (weak, nonatomic) id<SRUIFAceCommandRecordDelegate> delegate;

- (void).cxx_destruct;
- (void)incrementNumberOfStartedActions;
- (void)incrementNumberOfStoppedActions;
- (void)incrementNumberOfSuccessfullyCompletedActions;
- (void)incrementNumberOfUnsuccessfullyCompletedActions;
- (id)initWithAceCommand:(id)a0 andCompletion:(id /* block */)a1;

@end
