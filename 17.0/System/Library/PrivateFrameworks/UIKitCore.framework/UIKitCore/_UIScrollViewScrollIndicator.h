@class UIColor, NSString, UIView;
@protocol _UIScrollViewScrollIndicatorVisualStyle;

@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate, _UIScrollViewScrollIndicator> {
    id<_UIScrollViewScrollIndicatorVisualStyle> _visualStyle;
}

@property (retain, nonatomic) UIView *roundedFillView;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic, getter=_visualStyle) id<_UIScrollViewScrollIndicatorVisualStyle> _visualStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long style;
@property (nonatomic) BOOL expandedForDirectManipulation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutOffset;
@property (nonatomic) BOOL hasPointer;

+ (void)_ensureDefaultStyles;
+ (id)visualStyleForTraitCollection:(id)a0;
+ (void)registerVisualStyle:(id)a0 forIdiom:(long long)a1;
+ (id)visualStyleForIdiom:(long long)a0;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_offsetFillViewRectForExpandedState:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_layoutFillViewAnimated:(BOOL)a0;
- (void)didMoveToWindow;

@end
