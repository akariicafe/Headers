@class NSMutableArray, NSCondition;

@interface TSUDateParserLibrary : NSObject {
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedDateParserLibrary;

- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)checkoutDateParser;
- (void)returnDateParser:(id)a0;

@end
