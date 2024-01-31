@class NSString, NSMutableDictionary, NSMutableArray;

@interface MapsSuggestionsLimitedDictionary : NSObject <MapsSuggestionsTriggerObserver> {
    unsigned long long _maxCapacity;
    NSMutableDictionary *_dict;
    NSMutableDictionary *_hits;
    NSMutableArray *_order;
    unsigned long long _totalHits;
    unsigned long long _totalMisses;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerFired:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)hitsOnKey:(id)a0;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (double)totalHitRatio;

@end
