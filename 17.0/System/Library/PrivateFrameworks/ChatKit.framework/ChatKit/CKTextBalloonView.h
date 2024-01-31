@class NSString, UITextView, NSAttributedString;
@protocol CKBalloonTextViewProtocol;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate, UITextViewDelegate, CKBalloonVibrancy>

@property (retain, nonatomic) UITextView<CKBalloonTextViewProtocol> *textView;
@property (nonatomic) BOOL ignoreSelectionEvent;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL containsExcessiveLineHeightCharacters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSelected;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addFilter:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clearFilters;
- (void)textViewDidChangeSelection:(id)a0;
- (void)tapGestureRecognized:(id)a0;
- (void)_layoutTextView;
- (void)setSelected:(BOOL)a0 withSelectionState:(id)a1;
- (void)interactionStartedTapInTextView:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)addOverlaySubview:(id)a0;
- (void)attachInvisibleInkEffectView;
- (void)configureForComposition:(id)a0;
- (void)configureForMessagePart:(id)a0;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)detachInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textView:(id)a1;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)a0;
- (void)interactionStartedLongPressInTextView:(id)a0;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)a0;
- (void)interactionTextView:(id)a0 userDidDragOutsideViewWithPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)interactionTextViewShouldCopyToPasteboard:(id)a0;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (id)nonVibrantSubViews;
- (void)restoreFromLargeTextTruncation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })targetTextContainerInsets;
- (double)textViewWidthForWidth:(double)a0;
- (void)truncateForLargeText;
- (void)updateRasterizationForInvisibleInkEffect;
- (id)updateTextSelectionState:(id)a0 forTextSelectionArea:(long long)a1;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)a0;

@end
