@class NSString, UITextView;

@interface SUUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *placeholderText;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)updatePlaceholderText:(BOOL)a0;

@end
