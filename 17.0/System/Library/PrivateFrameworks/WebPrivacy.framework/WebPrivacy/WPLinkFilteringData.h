@class NSDictionary, NSArray;

@interface WPLinkFilteringData : NSObject

@property (readonly, nonatomic) NSDictionary *scopedQueryParameters;
@property (readonly, nonatomic) NSArray *rules;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQueryParameters:(id)a0;
- (id)initWithRules:(id)a0;

@end
