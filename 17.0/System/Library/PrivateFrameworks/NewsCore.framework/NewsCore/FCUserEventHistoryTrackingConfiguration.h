@class FCUserEventHistoryPruningPolicies;

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
