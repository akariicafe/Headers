@class NSMutableAttributedString;

@interface SLHighlightDisambiguationPillMetrics : NSObject {
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillMetrics;
}

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } margins;
@property (nonatomic, readonly) double pillHeight;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } pillSize;
@property (nonatomic, readonly) double avatarDiameter;
@property (nonatomic, readonly) BOOL useSingleLineLayout;
@property (nonatomic, readonly) BOOL useChevron;
@property (nonatomic, readonly) struct CGImage { } *chevronImage;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } chevronSize;
@property (nonatomic, readonly) double chevronLeadingMargin;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } labelHorizontalMargins;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } firstLineSize;
@property (nonatomic, readonly) struct CGColor { } *firstLineColor;
@property (nonatomic, readonly) const struct __CTFont { } *firstLineFont;
@property (nonatomic, readonly) NSMutableAttributedString *firstLineAttributedString;
@property (nonatomic, readonly) struct CGColor { } *secondLineColor;
@property (nonatomic, readonly) const struct __CTFont { } *secondLineFont;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } secondLineSize;
@property (nonatomic, readonly) NSMutableAttributedString *secondLineAttributedString;

+ (id)firstLineStringFor:(id)a0;
+ (id)secondLineStringFor:(id)a0;
+ (id)accessibilityLabelFor:(id)a0;

- (const struct __CTLine { } *)lineFrom:(id)a0 maxWidth:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSlotStyle:(id)a0 tag:(id)a1;
- (id)initWithSlotStyle:(id)a0 tag:(id)a1 variant:(unsigned long long)a2;

@end
