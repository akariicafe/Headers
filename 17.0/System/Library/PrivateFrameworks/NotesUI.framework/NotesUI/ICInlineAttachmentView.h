@class UILabel, NSString, CADisplayLink, UIImage, ICAttributedStringRippler, NSDictionary, ICSearchResultRegexMatchFinder, UIContextMenuInteraction, ICInlineTextAttachment;
@protocol ICInlineAttachmentViewAnimationDelegate;

@interface ICInlineAttachmentView : UIView <UIGestureRecognizerDelegate, ICTextPreviewProvider, ICAttachmentViewInitializing, UIContextMenuInteractionDelegate>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CADisplayLink *rippleAnimationTimer;
@property (retain, nonatomic) ICAttributedStringRippler *rippler;
@property (retain, nonatomic) UIContextMenuInteraction *contextInteraction;
@property (weak, nonatomic) ICInlineTextAttachment *textAttachment;
@property (nonatomic) double textContainerWidth;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) BOOL isLinkAttachmentView;
@property (copy, nonatomic) NSDictionary *surroundingAttributes;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) UIImage *imageForPrinting;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (weak, nonatomic) id<ICInlineAttachmentViewAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (void)updateLabel;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)accessibilityAttributedLabel;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)didMoveToWindow;
- (void)updateHighlightsWithAttributes:(id)a0;
- (void)animateInsertionIfNecessary;
- (void)attachmentDataChanged:(id)a0;
- (void)beginRippleAnimation;
- (id)createNewLabel;
- (void)endRippleAnimation;
- (id)imageForTextPreviewInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithTextAttachment:(id)a0 textContainer:(id)a1 forManualRendering:(BOOL)a2;
- (void)objectDidUpdateShare:(id)a0;
- (void)respondToTapGesture:(id)a0;
- (void)setupEventHandling;
- (void)updateRippleAnimation;
- (void)updateStyleWithAttributes:(id)a0;

@end
