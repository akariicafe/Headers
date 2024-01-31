@class NSArray, NSDictionary;

@interface PISegmentationGatingRanges : NSObject {
    NSDictionary *_ranges;
}

@property (retain, nonatomic) NSArray *scoreKeys;

+ (id)loadFromURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithRanges:(id)a0;
- (id)rangeForKey:(id)a0;

@end
