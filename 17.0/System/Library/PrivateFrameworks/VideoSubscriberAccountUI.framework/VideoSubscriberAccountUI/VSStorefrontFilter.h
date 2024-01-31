@class NSArray, NSString;

@interface VSStorefrontFilter : NSObject

@property (copy, nonatomic) NSArray *storefronts;
@property (copy, nonatomic) NSString *searchQuery;
@property (readonly, copy, nonatomic) NSArray *filteredStorefronts;

+ (id)keyPathsForValuesAffectingFilteredStorefronts;

- (id)init;
- (void).cxx_destruct;

@end
