@class NSArray;

@interface TSUSharedLocale : NSObject {
    struct __CFLocale { } *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLocale;

- (struct __CFLocale { } *)currentLocale;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)datePreferencesChanged:(id)a0;

@end
