@class ConversationSearchOverlayView, UIFont, EMCachingContactStore, NSString, UIVisualEffectView, MFMessageDisplayMetrics, UIButton;
@protocol MFMessageFooterViewDelegate;

@interface MFConversationItemFooterView : UIView <UIPointerInteractionDelegate, ConversationSearchOverlayAdding>

@property (class, readonly, nonatomic) UIFont *prefixFont;
@property (class, readonly, nonatomic) UIFont *nameFont;

@property (nonatomic) double defaultRevealActionButtonOriginY;
@property (nonatomic) double defaultSeeMoreButtonOriginY;
@property (nonatomic) double defaultUndoSendButtonOriginY;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (nonatomic) double currentYOffset;
@property (readonly, nonatomic) BOOL shouldHideStickyFooterView;
@property (retain, nonatomic) ConversationSearchOverlayView *findOverlayView;
@property (retain, nonatomic) UIButton *revealActionsButton;
@property (retain, nonatomic) UIButton *seeMoreButton;
@property (retain, nonatomic) UIButton *undoSendButton;
@property (copy, nonatomic) NSString *senderName;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (nonatomic, getter=isSeeMoreButtonHidden) BOOL seeMoreButtonHidden;
@property (nonatomic, getter=isUndoSendButtonHidden) BOOL undoSendButtonHidden;
@property (nonatomic) double seeMoreButtonAlpha;
@property (readonly, nonatomic) double seeMoreButtonHeight;
@property (nonatomic) BOOL messageContainsBlockQuotes;
@property (nonatomic) BOOL blockquotesAreExpanded;
@property (weak, nonatomic) id<MFMessageFooterViewDelegate> delegate;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics;
@property (nonatomic) BOOL allowsPointerSnapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMarginsDidChange;
- (void)_updateBackgroundView;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_updateButtons;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (id)_seeMoreButton;
- (id)_undoSendButton;
- (void)hideAttribution;
- (void)removeConversationSearchOverlay;
- (void)_fontMetricCacheDidInvalidate:(id)a0;
- (void)_updateSeeMoreButton;
- (void)addConversationSearchOverlay;
- (void)addTarget:(id)a0 action:(SEL)a1 toButton:(long long)a2;
- (BOOL)isRevealActionsButtonHidden;
- (void)layoutActionButtonWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSeeMoreButton;
- (void)layoutUndoSendButton;
- (void)moveOriginYByOffset:(double)a0;
- (void)showAttributionWithSenderName:(id)a0;

@end
