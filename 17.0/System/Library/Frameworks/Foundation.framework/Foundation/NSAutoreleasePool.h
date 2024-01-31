@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (unsigned long long)poolCountHighWaterMark;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)showPools;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (void)enableRelease:(BOOL)a0;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)releaseAllPools;
+ (BOOL)autoreleasePoolExists;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (void)addObject:(id)a0;
+ (unsigned long long)totalAutoreleasedObjects;
+ (unsigned long long)topAutoreleasePoolCount;
+ (void)enableFreedObjectCheck:(BOOL)a0;

- (id)retain;
- (id)init;
- (void)dealloc;
- (void)drain;
- (unsigned long long)retainCount;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)autorelease;
- (void)addObject:(id)a0;
- (oneway void)release;

@end
