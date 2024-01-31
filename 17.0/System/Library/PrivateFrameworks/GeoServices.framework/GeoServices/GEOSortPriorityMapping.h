@class NSArray;

@interface GEOSortPriorityMapping : NSObject

@property (readonly, nonatomic) NSArray *entries;

+ (long long)resultSubtypeForACResultSubtype:(int)a0;
+ (long long)resultTypeForACResultType:(int)a0;
+ (id)sortPriorityMappingFromDefaultsValue:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)initWithAutocompleteResultSortPriorityMapping:(id)a0;

@end
