@interface TSWPTextMeasurer : NSObject

+ (BOOL)canQuicklyMeasureParagraphStyle:(id)a0;
+ (BOOL)canQuicklyMeasureString:(id)a0 textMeasurerBundle:(id)a1;
+ (double)heightForString:(id)a0 textMeasurerBundle:(id)a1 width:(double)a2 outFitWidth:(inout double *)a3;
+ (id)textMeasurerBundleForParagraphStyle:(id)a0;
+ (double)widthForString:(id)a0 textMeasurerBundle:(id)a1;

@end
