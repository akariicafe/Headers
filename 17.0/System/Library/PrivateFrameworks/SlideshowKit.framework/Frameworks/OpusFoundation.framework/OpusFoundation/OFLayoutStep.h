@class OFViewProxy;

@interface OFLayoutStep : NSObject

@property (readonly) OFViewProxy *targetView;
@property (readonly) unsigned long long targetAttribute;
@property (readonly) double targetSizeMultiplier;
@property (readonly) long long relation;
@property (readonly) OFViewProxy *anchorView;
@property (readonly) unsigned long long anchorAttribute;
@property (readonly) double anchorSizeMultiplier;
@property (readonly) double multiplier;
@property (readonly) double constant;

+ (id)stepsFromString:(id)a0 targetView:(id)a1 anchorView:(id)a2;
+ (BOOL)_parseCGPoint:(struct CGPoint { double x0; double x1; } *)a0 withScanner:(id)a1;
+ (id)_stepFrom1DString:(id)a0 targetView:(id)a1 anchorView:(id)a2;
+ (id)_stepsFrom2DString:(id)a0 targetView:(id)a1 anchorView:(id)a2;
+ (unsigned long long)layoutAttributeFromScanner:(id)a0;
+ (id)stepForTarget:(id)a0 attribute:(unsigned long long)a1 sizeMultiplier:(double)a2 relatedBy:(long long)a3 toAnchorView:(id)a4 attribute:(unsigned long long)a5 sizeMultiplier:(double)a6 multiplier:(double)a7 constant:(double)a8;

- (id)init;
- (void)run;

@end
