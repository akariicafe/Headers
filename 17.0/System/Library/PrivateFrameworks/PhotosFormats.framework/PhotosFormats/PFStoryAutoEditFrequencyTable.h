@class NSArray, NSMutableArray, NSNumber;
@protocol PFRandomNumberGenerator;

@interface PFStoryAutoEditFrequencyTable : NSObject {
    NSArray *_baseTable;
    NSMutableArray *_workingElements;
    id<PFRandomNumberGenerator> _randomNumberGenerator;
    NSNumber *_fallbackValue;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasValue:(id)a0;
- (id)initWithValueCounts:(id)a0 randomNumberGenerator:(id)a1 fallbackValue:(id)a2;
- (id)nextValue;
- (id)nextValuePassingTest:(id /* block */)a0;

@end
