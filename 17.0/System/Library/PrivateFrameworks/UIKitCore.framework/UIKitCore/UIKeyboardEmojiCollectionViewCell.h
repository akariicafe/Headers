@class UIKeyboardEmojiDraggableView, UILabel, UIKeyboardEmoji, UIView;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *unreleasedBanner;
@property (retain, nonatomic) UIView *navigationHighlightView;
@property (retain, nonatomic) UILabel *noResultsLabel;
@property (nonatomic) BOOL cellBeingTouched;
@property (copy, nonatomic) UIKeyboardEmoji *emoji;
@property (nonatomic) long long emojiFontSize;
@property (readonly, nonatomic) UIKeyboardEmojiDraggableView *emojiLabel;
@property (nonatomic) BOOL unreleasedHighlight;
@property (nonatomic) BOOL noResultsCell;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)setSelected:(BOOL)a0;

@end
