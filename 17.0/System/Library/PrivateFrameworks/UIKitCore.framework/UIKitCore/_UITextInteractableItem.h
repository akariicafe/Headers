@class _UITextItemHighlightView, UIView, NSArray, UITextRange, UIAction, _UITextItemInteractionHandler, UITextItem, UINotificationFeedbackGenerator, UIContextMenuInteraction, UITextItemMenuConfiguration;
@protocol _UITextItemInteracting, _UITextContent;

@interface _UITextInteractableItem : NSObject {
    struct { unsigned char primaryAction : 1; unsigned char menu : 1; } _requested;
    UIAction *_primaryAction;
}

@property (weak, nonatomic) id<_UITextContent> textContent;
@property (retain, nonatomic) _UITextItemInteractionHandler *itemHandler;
@property (readonly, nonatomic) _UITextItemHighlightView *highlightView;
@property (readonly, nonatomic) UIAction *defaultAction;
@property (readonly, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator;
@property (readonly, nonatomic) UITextRange *range;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) NSArray *rects;
@property (readonly, nonatomic) UITextItem *representedTextItem;
@property (readonly, weak, nonatomic) UIView<_UITextItemInteracting> *textItemInteractingView;
@property (readonly, nonatomic) UITextItemMenuConfiguration *preparedMenuConfiguration;
@property (weak, nonatomic) UIContextMenuInteraction *contextMenuInteraction;

+ (id)customItemWithTag:(id)a0 range:(id)a1 textItemInteractingView:(id)a2 location:(struct CGPoint { double x0; double x1; })a3;
+ (id)itemForAttachment:(id)a0 range:(id)a1 textItemInteractingView:(id)a2 location:(struct CGPoint { double x0; double x1; })a3;
+ (id)itemForLink:(id)a0 range:(id)a1 textItemInteractingView:(id)a2 location:(struct CGPoint { double x0; double x1; })a3;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)highlight;
- (BOOL)_allowHighlight;
- (BOOL)_actionPresentsMenu:(id)a0;
- (BOOL)_allowInteraction:(long long)a0;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_showsPreviewByDefault;
- (id)_solverWithUnifyRects:(BOOL)a0;
- (void)_warnForInvalidAction;
- (BOOL)canInvokeDefaultAction;
- (id)contextMenuConfiguration;
- (BOOL)defaultActionPresentsMenu;
- (BOOL)hasPrimaryAction;
- (id)initWithRange:(id)a0 view:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)invokeDefaultAction;
- (BOOL)isAttachmentItem;
- (BOOL)isLinkItem;
- (BOOL)isTagItem;
- (id)itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)prepareMenuConfigurationWithDefaultMenu:(id)a0;
- (id)preparedPrimaryActionWithDefaultAction:(id)a0;
- (BOOL)showsMenuPreview;
- (void)unhighlight;

@end
