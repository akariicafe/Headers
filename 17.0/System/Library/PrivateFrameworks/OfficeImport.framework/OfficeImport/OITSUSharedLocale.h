@class NSArray;

@interface OITSUSharedLocale : NSObject {
    struct __CFLocale { } *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLocale;

- (id)retain;
- (struct __CFLocale { } *)currentLocale;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)datePreferencesChanged:(id)a0;

@end
