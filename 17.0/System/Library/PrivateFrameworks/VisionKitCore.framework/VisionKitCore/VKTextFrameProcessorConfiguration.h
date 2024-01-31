@class NSArray;

@interface VKTextFrameProcessorConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL isForSingleItem;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) unsigned long long documentBlockType;
@property (nonatomic) struct CGPoint { double x; double y; } comparisonPoint;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) BOOL usesLanguageDetection;
@property (readonly, nonatomic) BOOL shouldPerformTextDetectionGating;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToTextFrameProcessorConfiguration:(id)a0;

@end
