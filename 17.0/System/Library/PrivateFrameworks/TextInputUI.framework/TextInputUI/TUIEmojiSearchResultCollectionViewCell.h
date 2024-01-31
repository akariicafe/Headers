@class UILabel, NSAttributedString, _TUIKeyboardEmojiDraggableView;

@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell {
    UILabel *_animationFromLabel;
    UILabel *_animationToLabel;
    unsigned long long _nestedAnimationCount;
}

@property (readonly, nonatomic) _TUIKeyboardEmojiDraggableView *emojiLabel;
@property (retain, nonatomic) NSAttributedString *displayedEmojiString;
@property (nonatomic) BOOL dragEnabled;

+ (id)reuseIdentifier;
+ (id)_createDraggableEmojiLabel;
+ (id)_createEmojiLabel;

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDisplayedEmojiString:(id)a0 animated:(BOOL)a1 withAnimationOffset:(unsigned long long)a2;

@end
