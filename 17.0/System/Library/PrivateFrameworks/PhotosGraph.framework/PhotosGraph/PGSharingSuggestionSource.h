@class NSString;

@interface PGSharingSuggestionSource : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *details;
@property (readonly, nonatomic) double weight;

- (id)description;
- (id)sourceDescription;
- (BOOL)canRunWithInput:(id)a0;
- (BOOL)canRunWithOptions:(id)a0;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;
- (id)suggestionResultWithPerson:(id)a0;
- (id)suggestionResultWithPerson:(id)a0 weight:(double)a1;
- (id)suggestionResultsWithPersons:(id)a0;

@end
