@interface IMAPFSUtils : NSObject

+ (unsigned long long)purgableFlagsForPath:(id)a0 error:(int *)a1;
+ (id)stringForPurgableFlags:(unsigned long long)a0;

@end
