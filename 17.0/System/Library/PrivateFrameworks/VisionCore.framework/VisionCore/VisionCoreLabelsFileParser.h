@interface VisionCoreLabelsFileParser : NSObject

+ (BOOL)isValidLabel:(id)a0;
+ (BOOL)parseLabels:(id *)a0 fromContentsOfURL:(id)a1 invalidLabelPlaceholderObject:(id)a2 validLabelIndexes:(id *)a3 error:(id *)a4;

@end
