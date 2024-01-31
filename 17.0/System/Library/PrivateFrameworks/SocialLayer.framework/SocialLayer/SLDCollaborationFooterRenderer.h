@class UISSlotStyle, SLDCollaborationFooterSlotTag, SLDCollaborationFooterMetrics;

@interface SLDCollaborationFooterRenderer : NSObject

@property (retain, nonatomic) UISSlotStyle *slotStyle;
@property (retain, nonatomic) SLDCollaborationFooterSlotTag *slotTag;
@property (readonly, nonatomic) SLDCollaborationFooterMetrics *metrics;

- (void)renderInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)_renderString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)_renderSubtitleInContext:(struct CGContext { } *)a0 titleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_renderTitleInContext:(struct CGContext { } *)a0 resultingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end
