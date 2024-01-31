@class UIFont, NSString, NSArray, NSLayoutManager, NSTextContainer, UIImage, NSTextStorage, NSMutableArray, NSMutableSet, UIColor;
@protocol SUICStreamingTextViewDelegate;

@interface SUICStreamingTextView : UIView <SUICStreamingTextViewEmptyProtocol> {
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
    BOOL _animatedInternal;
    UIImage *_chevronImage;
}

@property (weak, nonatomic) id<SUICStreamingTextViewDelegate> streamingTextViewDelegate;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double hyphenationFactor;
@property (retain, nonatomic) UIColor *startTextColor;
@property (retain, nonatomic) UIColor *endTextColor;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSArray *words;
@property (readonly, nonatomic) NSString *text;
@property (nonatomic) BOOL showChevron;
@property (nonatomic) BOOL renderEmojisOnly;
@property (nonatomic) BOOL renderEmojis;

- (void)_updateText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sharedInit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetState;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_animateWordIn:(id)a0;
- (void)_animateLayers;
- (void)_animateWordOut:(id)a0;
- (id)_createChevronImage;
- (id)_createGlyphImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 layoutManager:(id)a2;
- (id)_glyphImageForWord:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 textColor:(id)a3;
- (struct CGImage { } *)_imageRefForImage:(id)a0;
- (void)_layoutFrames;
- (id)_substringRangesContainingEmojiInString:(id)a0 startingIndex:(long long)a1;
- (void)_updateAnimatedInternal;

@end
