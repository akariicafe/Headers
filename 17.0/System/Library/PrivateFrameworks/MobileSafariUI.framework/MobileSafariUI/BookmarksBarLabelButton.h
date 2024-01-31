@class UIColor, NSString, UILongPressGestureRecognizer, UIEditMenuInteraction, SFFaviconView, WebBookmark;
@protocol BookmarksBarLabelButtonDelegate;

@interface BookmarksBarLabelButton : UIButton <UIEditMenuInteractionDelegate> {
    UIEditMenuInteraction *_editMenuInteraction;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SFFaviconView *_faviconView;
    id _faviconToken;
    BOOL _hasLeadingEmoji;
}

@property (retain, nonatomic) WebBookmark *bookmark;
@property (nonatomic) BOOL usesLightControls;
@property (weak, nonatomic) id<BookmarksBarLabelButtonDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cursorRegionInset;
@property (retain, nonatomic) UIColor *themeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelButton;
+ (id)labelButtonWithSiteIcon;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_handleLongPressGestureRecognizer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bookmarksBarLabelButtonHitRect;
- (void)_openInNewTabs:(id)a0;
- (BOOL)_canShowIcon;
- (void)_installFaviconView;
- (void)_setIcon:(id)a0;
- (void)_updateFaviconForURL:(id)a0;

@end
