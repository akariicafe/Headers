@interface OSADefaults : NSObject

+ (BOOL)boolForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)removeObjectForKey:(id)a0;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (id)dictionaryRepresentation;
+ (id)objectForKey:(id)a0;
+ (void)sendOperation:(unsigned long long)a0 forKey:(id)a1 withBlock:(id /* block */)a2;

@end
