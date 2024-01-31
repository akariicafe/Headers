@class UIColor, UIScribbleInteraction, NSString, UIKeyboardInputMode, NSDictionary, NSAttributedString;

@interface CKMessageEntryTextView : EMKTextView <UIScribbleInteractionDelegate, UIGestureRecognizerDelegate>

@property (nonatomic, getter=isShowingDictationPlaceholder) BOOL showingDictationPlaceholder;
@property (retain, nonatomic) UIKeyboardInputMode *savedKeyboardInputMode;
@property (retain, nonatomic) UIScribbleInteraction *scribbleInteraction;
@property (nonatomic, getter=isPencilWriting) BOOL pencilWriting;
@property (copy, nonatomic) NSAttributedString *compositionText;
@property (copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) UIColor *placeholderColor;
@property (nonatomic) double placeHolderWidth;
@property (readonly, nonatomic, getter=isSingleLine) BOOL singleLine;
@property (nonatomic, getter=isInPencilMode) BOOL inPencilMode;
@property (nonatomic) BOOL shouldStripEmojis;
@property (copy, nonatomic) NSDictionary *proofreadingInfo;
@property (nonatomic) BOOL sendCurrentLocationFromKeyboardEnabled;
@property (nonatomic) BOOL updatesFontOnTextChange;
@property (nonatomic) BOOL hideCaret;
@property (nonatomic) BOOL hideCaretUntilUserTypes;
@property (nonatomic) BOOL preventShowingCalloutMenu;
@property (nonatomic) double adjustedLineFragmentPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (void)dealloc;
- (void)setAttributedText:(id)a0;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (id)insertDictationResultPlaceholder;
- (void)layoutSubviews;
- (void)setFont:(id)a0;
- (void)scribbleInteractionWillBeginWriting:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutPlaceholder;
- (SEL)_sendCurrentLocationAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)scribbleInteractionDidFinishWriting:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)_stripEmojisIfNecessary;
- (void)_updateAttributedPlaceholder;
- (void)handleHoverGesture:(id)a0;
- (id)initUsingTextLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initUsingTextLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)restoreKeyboardInputMode;
- (void)saveKeyboardInputMode;
- (void)setupScribbleInteraction;
- (void)setupTextViewFromInitWithTextLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldIncludeDictationPadding;
- (void)updateFontIfNeeded;
- (void)updatePlaceholderLabelIfNeeded;
- (void)updateTextView;

@end
