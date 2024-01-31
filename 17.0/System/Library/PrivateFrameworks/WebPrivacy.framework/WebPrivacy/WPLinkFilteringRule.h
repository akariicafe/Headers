@class NSString;

@interface WPLinkFilteringRule : NSObject

@property (readonly, nonatomic) NSString *queryParameter;
@property (readonly, nonatomic) NSString *domain;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQueryParameter:(id)a0 domain:(id)a1;

@end
