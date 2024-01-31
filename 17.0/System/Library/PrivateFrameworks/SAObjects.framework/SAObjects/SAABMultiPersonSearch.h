@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand

@property (copy, nonatomic) NSArray *personSearches;
@property (copy, nonatomic) NSNumber *resultsLimit;

+ (id)multiPersonSearch;
+ (id)multiPersonSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
