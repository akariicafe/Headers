@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer

@property (nonatomic) long long groupingOption;
@property (retain, nonatomic) NSCalendar *conversionCalendar;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)initWithGroupingOption:(long long)a0;

@end
