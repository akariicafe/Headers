@class NSString, UITextView, NSLayoutConstraint;
@protocol _SFTableLinkableFooterViewDelegate;

@interface _SFTableLinkableFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {
    UITextView *_textView;
    NSLayoutConstraint *_textViewLeadingConstraint;
    NSLayoutConstraint *_textViewTrailingConstraint;
    NSString *_text;
    NSString *_linkPlaceholderString;
    NSString *_linkReplacementString;
}

@property (weak, nonatomic) id<_SFTableLinkableFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)_attributedStringTextColor;
- (void)_configureSubviewsAndConstraints;
- (void)_updateAttributedString;
- (void)setText:(id)a0 linkPlaceholderString:(id)a1 linkReplacementString:(id)a2;

@end
