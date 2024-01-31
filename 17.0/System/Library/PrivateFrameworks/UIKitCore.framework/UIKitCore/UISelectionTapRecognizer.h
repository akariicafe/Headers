@class UIResponder;
@protocol UITextInput;

@interface UISelectionTapRecognizer : UITextTapRecognizer

@property UIResponder<UITextInput> *textView;

- (void)setState:(long long)a0;
- (BOOL)isCloseToSelection;

@end
