@interface NPSDomainAccessorUtils : NSObject

+ (id)dataForObject:(id)a0;
+ (id)arrayForObject:(id)a0;
+ (id)URLForObject:(id)a0;
+ (BOOL)boolForObject:(id)a0 existsAndHasValidFormat:(BOOL *)a1;
+ (id)dictionaryForObject:(id)a0;
+ (double)doubleForObject:(id)a0 existsAndHasValidFormat:(BOOL *)a1;
+ (float)floatForObject:(id)a0 existsAndHasValidFormat:(BOOL *)a1;
+ (long long)integerForObject:(id)a0 existsAndHasValidFormat:(BOOL *)a1;
+ (long long)longForObject:(id)a0 existsAndHasValidFormat:(BOOL *)a1;
+ (id)objectForURL:(id)a0;
+ (id)stringArrayForObject:(id)a0;
+ (id)stringForObject:(id)a0;

@end
