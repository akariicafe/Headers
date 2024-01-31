@interface SNOptionalUtils : NSObject

+ (id)dictionaryWithNullableObject:(id)a0 key:(id)a1;
+ (id)dictionaryWithNullableOptionalObject:(id)a0 key:(id)a1;
+ (id)dictionaryWithOptionalObject:(id)a0 key:(id)a1;
+ (id)nullableObject:(id)a0 orDefault:(id)a1;
+ (id)optionalWithNullableObject:(id)a0;

- (id)init;

@end
