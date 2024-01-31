@class NSString, NSArray;

@interface FTMutableCategoryData : FTCategoryData

@property (copy, nonatomic) NSString *category_name;
@property (copy, nonatomic) NSArray *category_data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
