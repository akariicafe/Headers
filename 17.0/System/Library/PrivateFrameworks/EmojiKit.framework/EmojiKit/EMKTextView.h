@class EMKOverlayView, _EMKTextKit2Controller, NSTimer, UIView, EMKGestureRecognizerDelegate, EMFEmojiPreferences;

@interface EMKTextView : UITextView {
    EMKOverlayView *_overlayView;
    unsigned long long _tappedGlyphIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _tappedGlyphRange;
    NSTimer *_timer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _displayRect;
    BOOL _emojiConversionActive;
    _EMKTextKit2Controller *_textKit2Controller;
}

@property (retain) EMKGestureRecognizerDelegate *gestureRecognizerDelegate;
@property (retain) EMFEmojiPreferences *emojiPreferences;
@property (retain, nonatomic) UIView *textContainerOverlayView;
@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled;

+ (void)__emk_setNeedsDisplayCurrentRenderAttributesForView:(id)a0;

- (BOOL)_shouldSuppressSelectionCommands;
- (id)init;
- (void)dealloc;
- (void)startTimer:(id)a0;
- (void)didMoveToSuperview;
- (void)inputModeDidChange:(id)a0;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)keyboardDidShow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorRect;
- (id)initUsingTextLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initUsingTextLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)setDelayFrames:(unsigned long long)a0;
- (void)setPostFrames:(unsigned long long)a0;
- (void)setPreFrames:(unsigned long long)a0;
- (void)_emk_addRenderingAttribute:(id)a0 value:(id)a1 forTextRange:(id)a2;
- (void)_emk_removeRenderingAttribute:(id)a0 forTextRange:(id)a1;
- (void)_emk_setNeedsDisplayCurrentRenderAttributes;
- (void)_setTokenListsHidden_emk:(BOOL)a0;
- (void)_setTokenListsHighlighted_emk:(BOOL)a0 rippler:(id)a1;
- (void)calculateDisplayRect;
- (void)dismissOverlayView;
- (void)emojifyingDisabled:(id)a0;
- (id)personalizedEmojiTokenListForList:(id)a0;
- (void)replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withEmojiToken:(id)a1 language:(id)a2;
- (void)setEmojiConversionLanguagesAndActivateConversion:(BOOL)a0;
- (void)setEmojiConversionLanguagesForInputModeChange:(id)a0;
- (void)setEmojiConversionLanguagesForKeyboardShow:(id)a0;
- (void)setupLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopTimer:(id)a0;
- (void)textTapGestureRecognized:(id)a0;
- (BOOL)touchHasEmojiSignificance:(id)a0;
- (void)updateEmojiDisplay:(id)a0;
- (void)updateOverlayView:(id)a0;

@end
