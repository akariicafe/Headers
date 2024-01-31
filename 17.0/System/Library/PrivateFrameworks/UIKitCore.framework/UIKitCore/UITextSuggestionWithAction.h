@interface UITextSuggestionWithAction : UITextSuggestion

@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;

- (void).cxx_destruct;
- (void)performActionWihSender:(id)a0;

@end
