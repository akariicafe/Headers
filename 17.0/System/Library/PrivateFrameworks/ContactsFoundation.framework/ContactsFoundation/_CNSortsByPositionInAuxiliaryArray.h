@class NSDictionary, NSArray;

@interface _CNSortsByPositionInAuxiliaryArray : NSObject

@property (readonly, copy, nonatomic) id /* block */ transform;
@property (readonly, copy, nonatomic) NSDictionary *ranks;
@property (readonly, copy, nonatomic) NSArray *auxiliaryValues;

+ (id /* block */)comparatorForSortingAccordingToAuxiliaryValues:(id)a0 transform:(id /* block */)a1;

- (id /* block */)comparator;
- (void).cxx_destruct;
- (id)initWithAuxiliaryValues:(id)a0 transform:(id /* block */)a1;
- (void)prepareRankingIndex;
- (id)rankForObject:(id)a0;

@end
