@class FBKQuestionChoice;

@interface FBKChoiceCell : UITableViewCell

@property (weak, nonatomic) FBKQuestionChoice *choice;

- (void).cxx_destruct;
- (id)appIconForChoice:(id)a0;
- (void)evaluateSelectionWithValue:(id)a0;
- (void)evaluateSelectionWithValues:(id)a0;
- (void)updateWithChoice:(id)a0;

@end
