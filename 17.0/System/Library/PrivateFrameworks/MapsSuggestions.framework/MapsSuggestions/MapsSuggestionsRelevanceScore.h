@class NSDate;

@interface MapsSuggestionsRelevanceScore : NSObject

@property (nonatomic) double confidence;
@property (retain, nonatomic) NSDate *lastInteractionTime;

- (void).cxx_destruct;
- (id)initWithConfidence:(double)a0;

@end
