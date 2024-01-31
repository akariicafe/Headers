@class UISSlotStyle, NSArray, SLDHighlightPillSlotTag, SLHighlightPillMetrics;

@interface SLDHighlightPillRenderer : NSObject

@property (retain, nonatomic) UISSlotStyle *slotStyle;
@property (retain, nonatomic) SLDHighlightPillSlotTag *slotTag;
@property (retain, nonatomic) SLHighlightPillMetrics *metricsProvider;
@property (nonatomic) struct __CTFont { } *font;
@property (retain, nonatomic) NSArray *contactImages;
@property (nonatomic, getter=isRTL) BOOL RTL;

- (void)dealloc;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)_drawAvatarImage:(struct CGImage { } *)a0 inContext:(struct CGContext { } *)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_drawKnockoutBorderWidth:(double)a0 atXPosition:(double)a1 aroundImageWithYPosition:(double)a2 diameter:(double)a3 inContext:(struct CGContext { } *)a4;
- (struct CGImage { } *)_newAvatarImageFromImageData:(id)a0;
- (void)_renderAvatarsInContext:(struct CGContext { } *)a0;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end
