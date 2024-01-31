@class UIFont, NSString, _MSStickerDragPreviewContainerView, NSAttributedString, UIView, UIImageView, UIDragInteraction, UILabel;
@protocol UIKeyboardEmojiDraggableViewDelegate;

@interface UIKeyboardEmojiDraggableView : UIView <UIDragInteractionDelegate_Private> {
    UILabel *_fixedLabel;
    UIView *_liftContainerView;
    UILabel *_previewLabel;
    UIImageView *_upscaledImageView;
    double _liftScale;
    _MSStickerDragPreviewContainerView *_container;
    UIDragInteraction *_dragInteraction;
    BOOL _shouldLiftFromLastTouchLocation;
    struct CGPoint { double x; double y; } _lastTouchLocation;
    BOOL _lifted;
}

@property (weak, nonatomic) id<UIKeyboardEmojiDraggableViewDelegate> delegate;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL dragEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)a0;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)reset;
- (id)_dragInteraction:(id)a0 sessionPropertiesForSession:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateLiftScale;
- (void)addSilhouetteFiltersToView:(id)a0;
- (id)createLabel;
- (void)generateEmoji:(id)a0 withCompletion:(id /* block */)a1;
- (id)newLiftContainerView;
- (void)setEmojiPopoverBackgroundHitTestingEnabled:(BOOL)a0;
- (void)updateDragInteraction;
- (void)willCancelVariantsWithTouch:(id)a0;

@end
