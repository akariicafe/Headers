@interface NSJSONSerialization : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)dataWithJSONObject:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)JSONObjectWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)JSONObjectWithStream:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)isValidJSONObject:(id)a0;
+ (long long)writeJSONObject:(id)a0 toStream:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (id)init;

@end
