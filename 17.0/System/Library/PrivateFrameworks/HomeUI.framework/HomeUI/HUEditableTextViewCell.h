@class NSString, UITextView;
@protocol UITextViewDelegate;

@interface HUEditableTextViewCell : UITableViewCell <HUDisableableCellProtocol>

@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) BOOL showingPlaceholder;
@property (weak, nonatomic) id<UITextViewDelegate> textViewDelegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) BOOL editEnabled;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateTextColor;
- (void)handleUITextViewTextDidBeginEditingNotification:(id)a0;
- (void)handleUITextViewTextDidEndEditingNotification:(id)a0;
- (id)trimmedStringForText:(id)a0;

@end
