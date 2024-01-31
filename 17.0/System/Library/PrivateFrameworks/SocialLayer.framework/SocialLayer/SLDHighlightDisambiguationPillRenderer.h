@class UISSlotStyle, NSArray, SLDHighlightDisambiguationPillSlotTag, SLHighlightDisambiguationPillMetrics;

@interface SLDHighlightDisambiguationPillRenderer : NSObject

@property (retain, nonatomic) UISSlotStyle *slotStyle;
@property (retain, nonatomic) SLDHighlightDisambiguationPillSlotTag *slotTag;
@property (retain, nonatomic) SLHighlightDisambiguationPillMetrics *metricsProvider;
@property (retain, nonatomic) NSArray *contactImages;
@property (nonatomic, getter=isRTL) BOOL RTL;

- (void)renderInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)_renderAvatarInContext:(struct CGContext { } *)a0;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end
