@class NSString, SUTextContentView, UIScrollView;
@protocol SUTextViewCellDelegate;

@interface SUTextViewCell : SUTableCell <UITextContentViewDelegate> {
    UIScrollView *_scrollView;
}

@property (nonatomic) id<SUTextViewCellDelegate> delegate;
@property (readonly, nonatomic) SUTextContentView *textContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)resignFirstResponder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)textContentView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)textContentView:(id)a0 shouldChangeSizeForContentSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)textContentView:(id)a0 shouldScrollForPendingContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)textContentViewDidChange:(id)a0;
- (BOOL)textContentViewShouldBeginEditing:(id)a0;
- (BOOL)textContentViewShouldEndEditing:(id)a0;

@end
