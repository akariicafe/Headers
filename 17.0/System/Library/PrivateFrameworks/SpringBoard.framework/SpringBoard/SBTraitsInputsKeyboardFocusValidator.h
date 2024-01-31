@class UIKBArbiterClientFocusContext;

@interface SBTraitsInputsKeyboardFocusValidator : SBTraitsInputsValidator

@property (weak, nonatomic) UIKBArbiterClientFocusContext *focusContext;

- (id)description;
- (void).cxx_destruct;
- (id)validateInputs:(id)a0 withContext:(id)a1;

@end
