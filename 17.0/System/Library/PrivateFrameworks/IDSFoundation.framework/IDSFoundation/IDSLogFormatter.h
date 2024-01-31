@interface IDSLogFormatter : NSObject

+ (id)descriptionForArray:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForArray:(id)a0 options:(unsigned long long)a1 level:(long long)a2;
+ (id)descriptionForString:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForDictionary:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForObject:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForData:(id)a0 options:(unsigned long long)a1;
+ (id)descriptionForDictionary:(id)a0 options:(unsigned long long)a1 level:(long long)a2;
+ (id)descriptionForObject:(id)a0 options:(unsigned long long)a1 level:(long long)a2;

@end
