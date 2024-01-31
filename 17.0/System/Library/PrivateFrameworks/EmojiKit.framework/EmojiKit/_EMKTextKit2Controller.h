@class _EMKTextContainerOverlayView, _EMKTouchInfo, NSObject, EMKTextEnumerator, UIView, NSString, NSTextLayoutManager, EMKOverlayView, NSTimer, EMFEmojiPreferences, NSArray, EMKGlyphRippler, EMKTextView;
@protocol OS_os_log;

@interface _EMKTextKit2Controller : NSObject <NSTextContentStorageDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak) EMKTextView *textView;
@property (readonly) NSTextLayoutManager *_layoutManager;
@property (retain, nonatomic) _EMKTextContainerOverlayView *containerOverlayView;
@property (retain) EMFEmojiPreferences *emojiPreferences;
@property (retain) EMKOverlayView *overlayView;
@property (retain) NSTimer *rippleTimer;
@property (retain, nonatomic) EMKGlyphRippler *rippler;
@property (retain, nonatomic) EMKTextEnumerator *textEnumerator;
@property (retain, nonatomic) _EMKTouchInfo *lastTouchInfo;
@property (nonatomic, getter=isEmojiAnimationActive) BOOL emojiAnimationActive;
@property (nonatomic, getter=isDarkModeEnabled) BOOL darkModeEnabled;
@property (nonatomic, getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled;
@property (nonatomic, getter=isEmojiConversionActive) BOOL emojiConversionActive;
@property (copy, nonatomic) NSArray *emojiConversionLanguages;
@property (retain, nonatomic) UIView *textContainerOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__startAnimation;
- (void).cxx_destruct;
- (BOOL)textContentManager:(id)a0 shouldEnumerateTextElement:(id)a1 options:(unsigned long long)a2;
- (id)textContentStorage:(id)a0 textParagraphWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)__stopAnimation;
- (void)_startOrStopAnimation;
- (void)_startRippleAnimation;
- (void)_updateOverlayView;
- (void)dismissOverlayView;
- (id)initWithTextView:(id)a0 emojiPreferences:(id)a1;
- (void)replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withEmojiToken:(id)a1 language:(id)a2;
- (void)textTapGestureRecognized:(id)a0;
- (void)textViewDidLayoutSubviews;
- (BOOL)touchHasEmojiSignificance:(id)a0;
- (void)updateEmojiDisplay:(id)a0;

@end
