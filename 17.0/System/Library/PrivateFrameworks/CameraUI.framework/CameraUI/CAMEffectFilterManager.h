@interface CAMEffectFilterManager : NSObject

+ (id)namesFromFilters:(id)a0;
+ (id)displayNameForType:(long long)a0;
+ (id)ciFilterNameForFilterType:(long long)a0;
+ (BOOL)isDepthEffectInFilters:(id)a0;
+ (BOOL)areFilters:(id)a0 equalTo:(id)a1;
+ (id)filtersForFilterType:(long long)a0 lightingType:(long long)a1 applyDepthEffect:(BOOL)a2;
+ (id)ciFilterNameForFilterType:(long long)a0 lightingType:(long long)a1;

@end
