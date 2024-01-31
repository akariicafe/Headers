@class UITextView, NSString, UIView, UILabel;

@interface SUUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate> {
    UIView *_bottomBorderView;
    UILabel *_label;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}

@property (nonatomic) BOOL leftToRight;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long maximumCharacterCount;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UITextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newTextView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;

@end
