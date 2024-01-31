@class UIButton, NSString, UIContextMenuInteraction, UIDocumentProperties, LPLinkView;

@interface _UIDocumentPropertiesHeaderView : UIView <UIDragInteractionDelegate, UIGestureRecognizerDelegate, LPLinkViewDelegate, UIPointerInteractionDelegate> {
    UIDocumentProperties *_properties;
    UIContextMenuInteraction *_menuInteraction;
    id /* block */ _sourceViewProvider;
    UIButton *_shareButton;
    struct { unsigned char didSetupDragInteraction : 1; } _flags;
}

@property (readonly, nonatomic) LPLinkView *linkView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)_share:(id)a0;
- (void)update;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithProperties:(id)a0 metadata:(id)a1 menuInteraction:(id)a2 sourceViewProvider:(id /* block */)a3;
- (id)_defaultDragPreview;
- (id)_defaultSharePreview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForDragInteraction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForShareButton;
- (void)linkViewNeedsResize:(id)a0;

@end
