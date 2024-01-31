@class NSMutableDictionary, Filter;

@interface SymptomFilter : NSObject

@property (nonatomic) unsigned int targetSymptomId;
@property (readonly, nonatomic) NSMutableDictionary *potentialFilters;
@property (retain, nonatomic) Filter *currentFilter;
@property (retain, nonatomic) Filter *finalFilter;

- (id)init;
- (id)description;
- (int)configureItem:(id)a0;
- (void).cxx_destruct;

@end
