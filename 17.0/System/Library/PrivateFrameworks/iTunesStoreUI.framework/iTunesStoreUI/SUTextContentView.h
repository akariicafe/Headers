@class NSString, UILabel;

@interface SUTextContentView : UITextContentView {
    UILabel *_placeholderLabel;
}

@property (retain, nonatomic) NSString *placeholder;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)keyboardInputChangedSelection:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setText:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;

@end
