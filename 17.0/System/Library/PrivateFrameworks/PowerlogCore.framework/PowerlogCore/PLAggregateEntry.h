@class NSString, NSMutableDictionary, NSArray;

@interface PLAggregateEntry : NSObject

@property (retain) NSString *entryKey;
@property (retain, nonatomic) NSMutableDictionary *matchingKeyToValue;
@property (retain) NSArray *otherAggregateKeys;
@property (retain) NSString *aggregateKey;
@property double aggregateValue;
@property short aggregateFunction;

- (void)updateWithValue:(double)a0;
- (id)query;
- (id)description;
- (void).cxx_destruct;
- (id)matchingPairs;
- (id)aggregateOperationWithMatchingPairs:(id)a0;

@end
