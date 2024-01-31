@class NSString, NSArray;

@interface FLTMutableSSUCategoryGroup : FLTSSUCategoryGroup

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *positive_intents;
@property (copy, nonatomic) NSArray *negative_examples;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
