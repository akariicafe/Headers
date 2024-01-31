@class UISSlotStyle, SLDHighlightDisambiguationPillSlotTag, NSString;

@interface SLDHighlightDisambiguationPillDrawing : NSObject <UISDrawing>

@property (retain, nonatomic) UISSlotStyle *slotStyle;
@property (retain, nonatomic) SLDHighlightDisambiguationPillSlotTag *tag;
@property (nonatomic) BOOL forRemote;
@property (nonatomic) BOOL isRTL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithStyle:(id)a0 tag:(id)a1 forRemote:(BOOL)a2;

@end
