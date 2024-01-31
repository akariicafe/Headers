@class MOCategoryShieldPolicy;

@interface MOEffectiveCategoryShieldPolicy : NSObject

@property (readonly) MOCategoryShieldPolicy *value;
@property (readonly) MOCategoryShieldPolicy *defaultValue;

- (id)initWithValue:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;

@end
