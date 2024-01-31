@class NSSet, NSDictionary;

@interface SWFeedConfiguration : NSObject

@property (copy, nonatomic) NSSet *selectors;
@property (copy, nonatomic) NSDictionary *configuration;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSelectors:(id)a0 configuration:(id)a1;

@end
