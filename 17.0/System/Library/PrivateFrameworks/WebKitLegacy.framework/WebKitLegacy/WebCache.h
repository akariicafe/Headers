@interface WebCache : NSObject

+ (void)empty;
+ (void)setDisabled:(BOOL)a0;
+ (BOOL)isDisabled;
+ (void)initialize;
+ (id)statistics;
+ (struct CGImage { } *)imageForURL:(id)a0;
+ (void)clearCachedCredentials;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int *)a0;

@end
