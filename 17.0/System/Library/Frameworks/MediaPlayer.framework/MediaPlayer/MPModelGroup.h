@class NSString;

@interface MPModelGroup : MPModelObject

@property (copy, nonatomic) NSString *title;

+ (id)kind;
+ (long long)genericObjectType;
+ (void)__MPModelPropertyKeyGroupTitle__MAPPING_MISSING__;
+ (id)__title_KEY;

- (id)humanDescription;

@end
