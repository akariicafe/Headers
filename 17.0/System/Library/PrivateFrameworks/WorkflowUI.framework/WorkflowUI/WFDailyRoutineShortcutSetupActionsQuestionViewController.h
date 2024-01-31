@class NSString, WFDailyRoutineShortcutSetupActionsQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupActionsQuestionViewController : OBWelcomeController <CNContactPickerDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController>

@property (weak, nonatomic) id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupActionsQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL parentShouldShowSkipButton;

- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (id)initWithQuestion:(id)a0;
- (void)didSelectAddButton;
- (void)didSelectSkipButton;

@end
