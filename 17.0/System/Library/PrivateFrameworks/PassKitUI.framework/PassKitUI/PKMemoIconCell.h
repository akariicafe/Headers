@class UITextView, NSString, PKMemoItem, UILabel;
@protocol PKMemoIconCellDelegate;

@interface PKMemoIconCell : UICollectionViewCell <UITextViewDelegate> {
    UILabel *_emojiLabel;
    UITextView *_emojiTextView;
    struct CGSize { double width; double height; } _priorBoundsSize;
}

@property (retain, nonatomic) PKMemoItem *item;
@property (weak, nonatomic) id<PKMemoIconCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)showEmojiKeyboardIfNeeded;

@end
