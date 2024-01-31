@class _UIPortalView;

@interface SBHPortaledShadowedWidgetView : SBHShadowedWidgetView

@property (retain, nonatomic) _UIPortalView *contentView;
@property (retain, nonatomic) _UIPortalView *shadowView;
@property (nonatomic) BOOL hidesSourceViews;

- (id)initWithContentView:(id)a0 shadowView:(id)a1 perspectiveEnabled:(BOOL)a2;

@end
