@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)cache;
+ (void)clearCache;
+ (id)classInfoForClass:(Class)a0;

- (id)inputKeys;
- (id)init;
- (void)dealloc;
- (id)outputKeys;
- (id)description;
- (id)initWithClass:(Class)a0;
- (id)inputClasses;

@end
