@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (id)currentEnvironment;
+ (id)defaultEnvironment;
+ (id)defaultStack;
+ (char *)environmentStackKey;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)effectiveWritingStackForKey:(void *)a0;

- (void)becomeCurrent;
- (void).cxx_destruct;
- (void)resignCurrent;

@end
